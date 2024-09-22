/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:07:39 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:36:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strrchr - Locates the last occurrence of a character in a string.
 * @s: The string to search.
 * @c: The character to find (converted to a char).
 *
 * The function searches the string 's' for the last occurrence 
 * of the character 'c'.
 * If the character is found, a pointer to the last occurrence of the 
 * character in the string is returned. 
 *
 * If the character is not found, the function returns NULL.
 * If 'c' is the null terminator, the function returns a pointer to the 
 * terminating null byte.
 *
 * Return: A pointer to the last occurrence of the character 'c'
 * or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*a;

	i = 0;
	cc = (char)c;
	a = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			a = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		a = (char *) &s[i];
	return (a);
}
