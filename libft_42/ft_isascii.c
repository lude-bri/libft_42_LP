/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:34:58 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/16 10:51:32 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isascii - Checks if a character is part of the ASCII set.
 * @c: The character to check.
 *
 * The function checks whether the input character is a valid ASCII character.
 * ASCII characters have values ranging from 0 to 127. If the character falls
 * within this range, the function returns 1; otherwise, it returns 0.
 *
 * Return: 1 if the character is a valid ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
