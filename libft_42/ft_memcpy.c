/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:08:04 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:18:31 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcpy - Copies memory from one area to another.
 * @dest: The destination memory area where bytes will be copied to.
 * @src: The source memory area from where bytes will be copied.
 * @n: The number of bytes to copy.
 *
 * The function copies 'n' bytes from the memory area 'src' 
 * to the memory area 'dest'.
 * The two memory areas must not overlap. If either 'dest' or 'src' is NULL, the
 * function returns NULL. 
 * After copying, the destination pointer 'dest' is returned.
 *
 * Return: A pointer to the destination memory area 'dest', 
 * or NULL if both pointers are NULL.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
