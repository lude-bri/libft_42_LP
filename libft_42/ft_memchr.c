/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:51:44 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 10:50:55 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memchr - Locates the first occurrence of a byte in a memory area.
 * @s: The pointer to the memory area to search.
 * @c: The byte value to locate (interpreted as an unsigned char).
 * @n: The number of bytes to search.
 *
 * The function searches the first 'n' bytes of the memory area pointed to by 's'
 * for the first occurrence of the byte 'c'. If the byte is found, a pointer to
 * the matching byte is returned. If the byte is not found within 'n' bytes, the
 * function returns NULL.
 *
 * Return: A pointer to the matching byte, or NULL if the byte is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*re;

	i = 0;
	re = (unsigned char *)s;
	while (i < n)
	{
		if (re[i] == (unsigned char) c)
			return ((void *) &re[i]);
		i++;
	}
	return (0);
}
