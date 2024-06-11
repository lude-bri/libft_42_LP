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
