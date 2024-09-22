/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:37:37 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 11:17:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - Compares two memory areas byte by byte.
 * @s1: The first memory area.
 * @s2: The second memory area.
 * @n: The number of bytes to compare.
 *
 * The function compares the first 'n' bytes of the memory areas 's1' and 's2'.
 * It returns the difference between the first differing bytes as 
 * unsigned char values.
 * If the memory areas are identical for the first 'n' bytes, 
 * the function returns 0.
 *
 * Return: An integer less than, equal to, or greater than 0 if 's1' 
 * is found to be less than, equal to, or greater than 's2' respectively.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
