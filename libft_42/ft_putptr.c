/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:07:16 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 18:47:37 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexlong(int long n);

/**
 * ft_putptr - Prints a memory address (pointer) in hexadecimal format.
 * @n: The memory address (as a long integer) to print.
 *
 * The function prints the memory address in the form "0x" followed by the
 * hexadecimal representation of the address. It uses the ft_puthexlong function
 * to print the address. The "0x" prefix is printed to indicate hexadec format.
 *
 * Return: The total number of characters printed, including the "0x" prefix.
 */
int	ft_putptr(long int n)
{
	int	count;

	count = 0;
	write (1, "0x", 2);
	count += ft_puthexlong(n);
	return (count + 2);
}

/**
 * ft_puthexlong - Prints a long integer in hexadecimal format.
 * @n: The long integer to print in hexadecimal.
 *
 * The function converts and prints the long integer 'n' in hexadecimal format
 * using the base "0123456789abcdef". It recursively processes the digits of
 * the number, dividing it by 16 for each recursive call.
 *
 * Return: The number of characters printed.
 */
int	ft_puthexlong(int long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_puthexlong(n / 16);
		ft_puthexlong(n % 16);
	}
	else
	{
		write(1, &base[n], 1);
		count++;
	}
	return (count);
}
