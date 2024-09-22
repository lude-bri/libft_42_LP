/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:03:05 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:03:53 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n);

/**
 * ft_itoa - Converts an integer to a string.
 * @n: The integer to convert.
 *
 * The function converts an integer to its string representation.
 * It handles negative numbers by placing a '-' sign at 
 * the start of the string.
 * It uses dynamic memory allocation, so the caller must 
 * free the allocated memory.
 * If the input number is 0, the string "0" is returned.
 *
 * Return: A pointer to the null-terminated string representing the integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*str_convert;

	nbr = n;
	i = n_len(nbr);
	str_convert = malloc(sizeof(char) * n_len(nbr) + 1);
	if (!str_convert)
		return (0);
	str_convert[i] = '\0';
	if (nbr == 0)
		str_convert[0] = '0';
	if (nbr < 0)
	{
		str_convert[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str_convert[--i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	return (str_convert);
}

/**
 * n_len - Returns the length of the string representation of a number.
 * @n: The number to evaluate.
 *
 * This helper function calculates how many characters are needed to represent
 * the given integer, including the negative sign if the number is negative.
 *
 * Return: The length of the number in string form.
 */
static int	n_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
