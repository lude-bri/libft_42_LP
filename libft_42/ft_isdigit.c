/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:54:55 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 10:36:39 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * The function checks whether the input character is a digit (0-9).
 * If the character is a digit, it returns 1; otherwise, it returns 0.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
