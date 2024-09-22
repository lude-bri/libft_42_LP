/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:10:25 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/16 11:23:31 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memset - Fills a memory area with a specified byte.
 * @s: The pointer to the memory area to fill.
 * @c: The byte value to set (converted to unsigned char).
 * @n: The number of bytes to fill.
 *
 * The function fills the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'c' (converted to an unsigned char). It is typically
 * used to initialize a block of memory.
 *
 * Return: A pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
