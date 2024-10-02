/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:01:34 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 09:53:58 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_tolower - Converts an uppercase letter to lowercase.
 * @c: The character to convert.
 *
 * The function checks if the input character 'c' is an uppercase letter (A-Z).
 * If it is, the function converts it to the corresponding lowercase letter.
 * If 'c' is not an uppercase letter, it is returned unchanged.
 *
 * Return: The lowercase equivalent of 'c', 
 * or 'c' unchanged if it's not an uppercase letter.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
