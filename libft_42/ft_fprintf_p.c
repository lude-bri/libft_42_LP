/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:01:23 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 11:01:51 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

int		ft_fprint_ptr(unsigned long int n, int fd);
void	ft_fprint_address(unsigned long int n, int fd);
int		ft_fptrlen(unsigned long int n);

int	ft_fprint_p(unsigned long int n, t_format p, int fd)
{
	int	count;

	count = 0;
	if (n == 0)
		p.width -= ft_strlen("(nil)") - 1;
	else
		p.width -= 2;
	if (p.minus)
		count += ft_fprint_ptr(n, fd);
	count += ft_fpad_width(p.width, ft_fptrlen(n), 0, fd);
	if (!p.minus)
		count += ft_fprint_ptr(n, fd);
	return (count);
}

int	ft_fprint_ptr(unsigned long int n, int fd)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count += ft_fprint_str("(nil)", fd);
		return (count);
	}
	count += ft_fprint_str("0x", fd);
	ft_fprint_address(n, fd);
	count += ft_fptrlen(n);
	return (count);
}

void	ft_fprint_address(unsigned long int n, int fd)
{
	if (n >= 16)
	{
		ft_fprint_address((n / 16), fd);
		ft_fprint_address((n % 16), fd);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd((n + '0'), fd);
		else if (n >= 10)
			ft_putchar_fd(((n - 10) + 'a'), fd);
	}
}

int	ft_fptrlen(unsigned long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 16;
		++len;
	}
	return (len);
}
