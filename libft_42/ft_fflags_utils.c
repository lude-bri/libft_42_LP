/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fflags_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:09:29 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 14:09:33 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

int	ft_fisflag(int c)
{
	return (ft_isdigit(c) || ft_fisspecif(c) || ft_fisflagtype(c));
}

int	ft_fisspecif(int c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'p' || c == '%' || c == 'f')
		return (1);
	return (0);
}

int	ft_fisflagtype(int c)
{
	if (c == '-' || c == '0' || c == '.' || c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

int	ft_fpad_width(int total_width, int size, int zero, int fd)
{
	int	count;

	count = 0;
	while (total_width - size > 0)
	{
		if (zero)
			count += ft_putchar_fd('0', fd);
		else
			count += ft_putchar_fd(' ', fd);
		--total_width;
	}
	return (count);
}
