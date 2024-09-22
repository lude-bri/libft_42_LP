/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 11:30:47 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:53:51 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isprint - Checks if a character is printable.
 * @c: The character to check.
 *
 * The function checks whether the input character is a printable 
 * ASCII character.
 * Printable characters have values between 32 (space) and 126 (tilde '~').
 * If the character is printable, the function returns 1; 
 * otherwise, it returns 0.
 *
 * Return: 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
