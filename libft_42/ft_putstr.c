/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:45:27 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 18:51:46 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putstr - Writes a string to the standard output.
 * @s: The string to print.
 *
 * The function writes the string 's' to the standard output (file descriptor 1).
 * It iterates through each character of the string and prints it.
 *
 * Return: The number of characters printed (i.e., the length of the string).
 */
int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		count++;
	}
	return (count);
}
