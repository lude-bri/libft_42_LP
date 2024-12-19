/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:07:57 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 14:08:01 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

int	ft_fprint_c(char c, t_format *p, int fd)
{
	int		count;

	count = 0;
	if (p->minus)
		count += ft_putchar_fd(c, fd);
	count += ft_fpad_width(p->width, 1, 0, fd);
	if (!p->minus)
		count += ft_putchar_fd(c, fd);
	p->width = 0;
	return (count);
}
