/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:05:25 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:36:10 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to find (converted to a char).
 *
 * The function searches the string 's' for the first occurrence of the 
 * character 'c'.
 * If the character is found, a pointer to the matched character 
 * in the string is returned.
 * If the character is not found, or if 'c' is the null terminator, 
 * the function returns NULL.
 *
 * Return: A pointer to the first occurrence of the character 'c', 
 * or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] != cc)
			i++;
		else
			return ((char *) &s[i]);
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	else
		return (NULL);
}
