/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:12:08 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 14:13:02 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(double base, double exp)
{
	double	pow;
	double	i;

	if (exp < 0)
	{
		exp = -exp;
		base = (1 / base);
	}
	i = 0;
	pow = 1;
	while (i++ < exp)
		pow *= base;
	return (pow);
}
