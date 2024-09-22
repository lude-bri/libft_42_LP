/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:54:07 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:05:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_substr - Extracts a substring from a string.
 * @s: The input string from which to extract the substring.
 * @start: The starting index of the substring in the input string.
 * @len: The maximum length of the substring to extract.
 *
 * The function creates a new string that is a substring of 's', starting at the
 * index 'start' and of length 'len'. If 'start' is beyond the length 
 * of the string,
 * it returns an empty string. The function ensures that the returned substring
 * is null-terminated. If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly allocated substring, 
 * or NULL if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return ((char *)str);
}
