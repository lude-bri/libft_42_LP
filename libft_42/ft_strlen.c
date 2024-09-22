/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:36:47 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/01 14:57:55 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlen - Computes the length of a string.
 * @s: The input string to measure.
 *
 * The function counts the number of characters in 
 * the string 's' until it reaches the null terminator ('\0'). 
 *
 * It returns the total number of characters, excluding the null terminator.
 *
 * Return: The length of the string 's'.
 */
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
