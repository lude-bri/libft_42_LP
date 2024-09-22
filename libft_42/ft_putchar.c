/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:43:53 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 17:31:27 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putchar - Writes a character to the standard output.
 * @c: The character to print.
 *
 * The function writes the given character 'c' to the standard output
 * It returns 1 to indicate that one character has been written.
 *
 * Return: Always returns 1, indicating that one character was printed.
 */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
