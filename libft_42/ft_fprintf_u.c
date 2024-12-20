/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:15:44 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 09:15:57 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

int	ft_fprint_uint(char *nbrstr, t_format p, int fd);
int	ft_fprint_unsigned(char *nbrstr, t_format p, int fd);

int	ft_fprint_u(unsigned n, t_format p, int fd)
{
	int		count;
	char	*nbrstr;

	count = 0;
	if (!p.precision && n == 0)
	{
		count += ft_fpad_width(p.width, 0, 0, fd);
		return (count);
	}
	nbrstr = ft_uitoa(n);
	if (!nbrstr)
		return (0);
	count += ft_fprint_uint(nbrstr, p, fd);
	free(nbrstr);
	return (count);
}

int	ft_fprint_uint(char *nbrstr, t_format p, int fd)
{
	int		count;

	count = 0;
	if (p.minus)
		count += ft_fprint_unsigned(nbrstr, p, fd);
	if ((p.precision >= 0) && (size_t)p.precision < ft_strlen(nbrstr))
		p.precision = ft_strlen(nbrstr);
	if (p.precision >= 0)
	{
		p.width -= p.precision;
		count += ft_fpad_width(p.width, 0, 0, fd);
	}
	else
		count += ft_fpad_width(p.width, ft_strlen(nbrstr), p.zero, fd);
	if (!p.minus)
		count += ft_fprint_unsigned(nbrstr, p, fd);
	return (count);
}

int	ft_fprint_unsigned(char *nbrstr, t_format p, int fd)
{
	int	count;

	count = 0;
	if (p.precision >= 0)
		count += ft_fpad_width((p.precision - 1),
				(ft_strlen(nbrstr) - 1), 1, fd);
	count += ft_fprint_str(nbrstr, fd);
	return (count);
}
