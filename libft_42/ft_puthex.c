/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:02:20 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 19:27:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_puthex - Prints an unsigned integer in hexadecimal format.
 * @str: The format specifier ('x' for lowercase, 'X' for uppercase).
 * @n: The unsigned integer to convert and print.
 *
 * The function converts the unsigned integer 'n' into a hexadecimal string
 * and prints it. The format specifier 'str' determines whether the hexadecimal
 * digits will be printed in lowercase ('x') or uppercase ('X'). The function
 * handles recursion for printing each digit.
 *
 * Return: The number of characters printed.
 */
int	ft_puthex(char str, unsigned int n)
{
	char	*base;
	int		count;

	base = 0;
	count = 0;
	if (str == 'x')
		base = "0123456789abcdef";
	else if (str == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_puthex(str, n / 16);
		ft_puthex(str, n % 16);
	}
	if (n < 16)
	{
		ft_putchar(base[n]);
		count++;
	}
	return (count);
}
