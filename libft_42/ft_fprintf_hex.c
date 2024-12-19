/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:02:17 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 11:02:28 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

static int	ft_fprint_hexa(char *nbrstr, t_hexa_meta **norm,
				t_format *p, int fd);
static int	ft_fputhex(char *nbrstr, t_hexa_meta **norm, t_format p, int fd);
static int	ft_fputx_prefix(int is_upper, int fd);

int	ft_fprint_x(size_t n, int is_upper, t_format p, int fd)
{
	char		*nbrstr;
	int			count;
	t_hexa_meta	*norm;

	norm = malloc(sizeof(t_hexa_meta));
	norm->is_upper = is_upper;
	norm->n = n;
	count = 0;
	if (p.precision == 0 && n == 0)
	{
		count += ft_fpad_width(p.width, 0, 0, fd);
		return (count);
	}
	nbrstr = ft_xtoa(n, is_upper);
	if (!nbrstr)
		return (0);
	count += ft_fprint_hexa(nbrstr, &norm, &p, fd);
	free(nbrstr);
	free(norm);
	return (count);
}

static int	ft_fprint_hexa(char *nbrstr, t_hexa_meta **norm,
						t_format *p, int fd)
{
	int		count;

	count = 0;
	if (p->zero && p->sharp && (*norm)->n != 0)
	{
		count += ft_fputx_prefix((*norm)->is_upper, fd);
		p->width -= 2;
	}
	if (p->minus)
		count += ft_fputhex(nbrstr, norm, *p, fd);
	if ((p->precision >= 0) && ((size_t)p->precision < ft_strlen(nbrstr)))
		p->precision = ft_strlen(nbrstr);
	if (p->precision >= 0)
	{
		p->width -= p->precision;
		count += ft_fpad_width(p->width, 0, 0, fd);
	}
	else
		count += ft_fpad_width(p->width,
				(ft_strlen(nbrstr) + (p->sharp * 2)), p->zero, fd);
	if (!p->minus)
		count += ft_fputhex(nbrstr, norm, *p, fd);
	return (count);
}

static int	ft_fputhex(char *nbrstr, t_hexa_meta **norm, t_format p, int fd)
{
	int	count;

	count = 0;
	if (!p.zero && p.sharp && (*norm)->n != 0)
		count += ft_fputx_prefix((*norm)->is_upper, fd);
	if (p.precision >= 0)
		count += ft_fpad_width((p.precision - 1),
				(ft_strlen(nbrstr) - 1), 1, fd);
	count += ft_fprint_str(nbrstr, fd);
	return (count);
}

static int	ft_fputx_prefix(int is_upper, int fd)
{
	if (is_upper)
		return (write(fd, "0X", 2));
	return (write(fd, "0x", 2));
}
