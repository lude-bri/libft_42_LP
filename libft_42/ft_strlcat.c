/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:14:58 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/29 20:00:28 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcat - Concatenates two strings, ensuring the result is null-terminated 
 * and fits within the provided size.
 * @dst: The destination string, which must be null-terminated.
 * @src: The source string to append to 'dst'.
 * @size: The size of the destination buffer, including the null terminator.
 *
 * The function appends the string 'src' to the end of 'dst'. It appends at most
 * 'size - strlen(dst) - 1' characters from 'src', 
 * ensuring that the result is null-terminated
 * if 'size' is greater than strlen(dst). 
 *
 * If 'size' is smaller than or equal to strlen(dst),
 * it returns the length of 'src' plus 'size'. 
 * The function returns the length of the string it
 * tried to create, aka. the initial length of 'dst' plus the length of 'src'.
 *
 * Return: The total length of the string it tried to create */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
