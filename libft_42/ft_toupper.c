/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:52:28 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/17 11:46:41 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_toupper - Converts a lowercase letter to uppercase.
 * @c: The character to convert.
 *
 * The function checks if the input character 'c' is a lowercase letter (a-z).
 * If it is, the function converts it to the corresponding uppercase letter.
 * If 'c' is not a lowercase letter, it is returned unchanged.
 *
 * Return: The uppercase equivalent of 'c', 
 * or 'c' unchanged if it's not a lowercase letter.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
