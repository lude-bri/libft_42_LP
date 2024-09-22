/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:46:16 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 18:50:24 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putnbr - Prints an integer to the standard output.
 * @n: The integer to print.
 *
 * The function prints the integer 'n' to the standard output. 
 * It handles negative numbers by printing the '-' sign and 
 * recursively printing the absolute value
 * of the integer. Special handling is provided for the minimum value of a 32-bit
 * signed integer since its absolute value exceeds the positive range.
 *
 * Return: The number of characters printed (including digits and signs).
 */
int	ft_putnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
		count++;
	}
	return (count);
}
