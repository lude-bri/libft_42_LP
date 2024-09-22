/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:33 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/01 15:33:54 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_bzero - Sets a block of memory to zero.
 * @s: Pointer to the memory area to be zeroed.
 * @n: The number of bytes to set to zero.
 *
 * The function iterates through the memory area pointed to by 's' and
 * sets each byte to zero ('\0'). It is commonly used to initialize memory
 * to a known state before further processing.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	size_t			x;
	unsigned char	*a;

	i = 0;
	x = '\0';
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = x;
		i++;
	}
}
