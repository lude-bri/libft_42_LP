/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:15:07 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:06:44 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Applies a function to each character of a string to create 
 * a new string.
 * @s: The input string.
 * @f: The function to apply to each character, 
 * with the character's index as the first argument.
 *
 * The function creates a new string by applying the function 'f' to each 
 * character of the string 's'. 
 *
 * The function 'f' receives two arguments: the current index and 
 * the character at that index. A new string is allocated to hold the result, 
 * and the result is null-terminated. 
 *
 * If memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly created string,
 * or NULL if memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*new_str;

	i = 0;
	new_str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	while (i < ft_strlen(s))
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
