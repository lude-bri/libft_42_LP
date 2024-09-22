/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:07:02 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 10:38:41 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - Checks if a character is alphanumeric.
 * @c: The character to check.
 *
 * The function checks whether the input character is a letter (either uppercase
 * or lowercase) or a digit (0-9). If the character is alphanumeric, 
 * it returns 1; otherwise, it returns 0.
 *
 * Return: 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
