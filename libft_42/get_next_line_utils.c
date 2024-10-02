/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luigi <Luigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:10:04 by lude-bri          #+#    #+#             */
/*   Updated: 2024/09/15 17:29:18 by Luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_gnl(char *txt, char *buff);
char		*ft_strchr_gnl(char *txt, int c);
size_t		ft_strlen_gnl(char *s);

/**
 * ft_strjoin_gnl - Concatenates two strings for use in get_next_line.
 * @txt: The first string (usually the previously read data).
 * @buff: The second string (new data to append).
 *
 * The function concatenates the strings 'txt' and 'buff',
 * allocating enough memory for the strings. 
 * If 'txt' is NULL, it is initialized to an empty string before concatenation.
 *
 * Return: A pointer to the newly concatenated string
 * or NULL if memory allocation fails.
 */
char	*ft_strjoin_gnl(char *txt, char *buff)
{
	int		i;
	int		j;
	int		size;
	char	*result;

	if (!txt)
	{
		txt = malloc(sizeof(char) * 1);
		txt[0] = '\0';
	}
	size = ft_strlen_gnl(txt) + ft_strlen_gnl(buff);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (txt[++i] != '\0' && i < size)
		result[i] = txt[i];
	j = 0;
	while (buff[j] != '\0' && i < size)
		result [i++] = buff[j++];
	result[i] = '\0';
	free(txt);
	return (result);
}

/**
 * ft_strchr_gnl - Locates the first occurrence of a character in a string.
 * @txt: The string to search.
 * @c: The character to find.
 *
 * This function searches for the first occurrence of the
 * character 'c' in the string 'txt'.
 * If the character is found, a pointer to the character in the 
 * string is returned. 
 * If the character is not found, the function returns NULL.
 *
 * Return: A pointer to the first occurrence of 'c',
 * or NULL if 'c' is not found.
 */
char	*ft_strchr_gnl(char *txt, int c)
{
	char	ch;

	ch = (char)c;
	if (!txt)
		return (NULL);
	while (*txt != '\0' && *txt != ch)
	{
		txt++;
	}
	if (*txt == ch)
	{
		return (txt);
	}
	return (NULL);
}

/**
 * ft_strlen_gnl - Calculates the length of a string.
 * @s: The string to measure.
 *
 * This function calculates the number of characters in the string 's', 
 * excluding the null terminator.
 *
 * Return: The length of the string, 
 * or 0 if the string is NULL.
 */
size_t	ft_strlen_gnl(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}
