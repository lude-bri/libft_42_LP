/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:59:28 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/29 16:44:36 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memmove - Copies memory from one area to another, handling overlaps.
 * @dest: The destination memory area where bytes will be copied to.
 * @src: The source memory area from where bytes will be copied.
 * @n: The number of bytes to copy.
 *
 * The function copies 'n' bytes from the memory area 'src' to 'dest'. 
 * If the source is before the destination, it copies from the
 * end to avoid overwriting. Otherwise, it copies from the beginning.
 *
 * Return: A pointer to the destination memory area 'dest', 
 * or NULL if both pointers are NULL.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	unsigned char		*b;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (!dest && !src)
		return (0);
	if (a < b)
	{
		while (n-- > 0)
			b[n] = a[n];
	}
	else
	{
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	return (dest);
}
