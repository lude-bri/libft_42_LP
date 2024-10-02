/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:44 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:38:57 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strnstr - Locates the first occurrence of a substring in a string, 
 * within a given length.
 * @big: The main string to search in.
 * @little: The substring to search for.
 * @len: The maximum number of characters to search.
 *
 * The function searches for the first occurrence of the substring 'little' 
 * in the string 'big', but only searches up to 'len' characters. 
 *
 * If 'little' is found within 'big', a pointer to the
 * first character of the substring in 'big' is returned. 
 *
 * If 'little' is an empty string, 'big' is returned.
 * If 'little' is not found within 'len' characters, NULL is returned.
 *
 * Return: A pointer to the first occurrence of 'little' in 'big', 
 * or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && i + j < len && big[i + j])
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
