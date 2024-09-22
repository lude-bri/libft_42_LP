/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:21:44 by luigi             #+#    #+#             */
/*   Updated: 2024/09/09 16:21:55 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_abs - Returns the absolute value of an integer.
 * @n: The integer to evaluate.
 *
 * If the input number is negative, the function returns its positive equivalent.
 * If the input number is positive or zero, it returns the number as is.
 *
 * Return: The absolute value of the input integer.
 */
int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
