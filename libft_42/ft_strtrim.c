/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:40:47 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 12:54:45 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char const *set, char c);

/**
 * ft_strtrim - Trims characters from the start and end of a string.
 * @s1: The input string to trim.
 * @set: The set of characters to be trimmed from the beginning and end of 
 * the string.
 *
 * The function removes all characters found in 'set' from the start and the end
 * of the string 's1'. It returns a new string that is a copy of 's1' with the
 * specified characters trimmed. If the trimmed string is empty, an empty string
 * is returned. Memory is allocated for the new string, 
 * and it must be freed by the caller.
 *
 * Return: A pointer to the trimmed string, or an empty string if 's1' is empty.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, i, j - i));
}

/**
 * to_trim - Checks if a character belongs to the set of characters to trim.
 * @set: The set of characters to be trimmed.
 * @c: The character to check.
 *
 * This helper function checks whether the character 'c' is found in the 'set'.
 * If the character is found, it returns 1 to indicate that the character should
 * be trimmed; otherwise, it returns 0.
 *
 * Return: 1 if the character should be trimmed, 0 otherwise.
 */
static int	to_trim(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
