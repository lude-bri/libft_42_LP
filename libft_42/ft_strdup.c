/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 08:14:32 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:34:21 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strdup - Duplicates a string by allocating memory for a copy of 
 * the input string.
 * @s: The string to duplicate.
 *
 * The function allocates enough memory to hold a copy of the string 's',
 * then copies the contents of 's' into the newly allocated memory. 
 * The resulting string is null-terminated. 
 * If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the duplicated string, 
 * or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s)
{
	int		i;
	char	*sdup;

	i = 0;
	sdup = (char *)malloc(ft_strlen(s) + 1);
	if (!sdup)
		return (NULL);
	while (s[i])
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = 0;
	return ((char *)sdup);
}
