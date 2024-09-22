/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:39:35 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/01 15:01:36 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy - Copies a string from 'src' to 'dst', 
 * ensuring null-termination and handling buffer size.
 * @dst: The destination buffer where the string will be copied.
 * @src: The source string to copy.
 * @size: The size of the destination buffer.
 *
 * The function copies up to 'size - 1' characters from the 
 * string 'src' to 'dst',
 * null-terminating the result if 'size' is greater than 0. 
 * If 'size' is 0, no characters are copied, and the function 
 * returns the length of 'src'. 
 *
 * Return: The total length of the string 'src' 
 * (not the number of characters copied).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while ((i < size - 1) && (src[i]))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
