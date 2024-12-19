/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fflags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:08:58 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 14:09:03 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

t_format	ft_fnewformat(void)
{
	t_format	new_format;

	new_format.len = 0;
	new_format.neg = 0;
	new_format.specifier = 0;
	new_format.flag = 0;
	new_format.minus = 0;
	new_format.plus = 0;
	new_format.width = 0;
	new_format.precision = -1;
	new_format.zero = 0;
	new_format.dot = 0;
	new_format.space = 0;
	new_format.sharp = 0;
	return (new_format);
}

void	ft_fresetformat(t_format *prsd)
{
	prsd->neg = 0;
	prsd->specifier = 0;
	prsd->flag = 0;
	prsd->minus = 0;
	prsd->plus = 0;
	prsd->width = 0;
	prsd->precision = -1;
	prsd->zero = 0;
	prsd->dot = 0;
	prsd->space = 0;
	prsd->sharp = 0;
}

t_format	ft_fflag_minus(t_format prsd)
{
	prsd.minus = 1;
	prsd.zero = 0;
	return (prsd);
}
