/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:33:12 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/16 10:51:28 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * The function checks whether the input character is an alphabetic letter,
 * either lowercase (a-z) or uppercase (A-Z). If the character is a letter,
 * it returns 1; otherwise, it returns 0.
 *
 * Return: 1 if the character is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
