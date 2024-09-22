/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:18:25 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 09:51:21 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * The function allocates memory for an array of 'nmemb' elements, each
 * of 'size' bytes, using malloc. If memory allocation fails, it returns NULL.
 * After allocation, the memory is set to zero using ft_bzero.
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*tmp;

	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (nmemb * size));
	return (tmp);
}
