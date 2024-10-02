/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luigi <Luigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:59:40 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 22:26:55 by Luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putudec - Prints an unsigned integer to the standard output.
 * @n: The unsigned integer to print.
 *
 * The function prints the unsigned integer 'n' to the standard output. 
 * It recursively handles larger numbers by dividing them into digits 
 * and printing each digit as a character.
 *
 * Return: The number of characters printed.
 */
int	ft_putudec(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n > 9)
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
