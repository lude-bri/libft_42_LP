/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:11:29 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/29 17:19:09 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c);
static int	count_letters(const char *s, char c);
static char	*copy_words(const char *s, int a);
static char	**free_array(const char **s, int a);

/**
 * ft_split - Splits a string into an array of words based on a delimiter.
 * @str: The input string to split.
 * @c: The delimiter character used to split the words.
 *
 * The function splits the input string 'str' into an array of words,
 * using the character 'c' as a delimiter. It allocates memory for each
 * word and returns a NULL-terminated array of strings. If memory allocation
 * fails at any point, it frees the allocated memory and returns NULL.
 *
 * Return: A pointer to the NULL-terminated array of words, 
 * or NULL if memory allocation fails.
 */
char	**ft_split(char const *str, char c)
{
	int		i;
	int		w;
	int		l;
	char	**array;

	i = 0;
	w = count_words(str, c);
	array = (char **)malloc((sizeof(char *) * (w + 1)));
	if (!array)
		return (0);
	while (w--)
	{
		while (*str == c && *str)
			str++;
		l = count_letters(str, c);
		array[i] = copy_words((const char *)str, l);
		if (!array[i])
			return (free_array((const char **)array, i));
		i++;
		while (*str != c && *str)
			str++;
	}
	array[i] = 0;
	return (array);
}

/**
 * count_words - Counts the number of words in a string separated by a delimiter.
 * @s: The input string to evaluate.
 * @c: The delimiter character.
 *
 * The function counts how many words (substrings separated by the delimiter 'c')
 * are present in the string 's'.
 *
 * Return: The number of words in the string.
 */
static int	count_words(const char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (w);
}

/**
 * count_letters - Counts the number of letters in a word until 
 * a delimiter is encountered.
 * @s: The input string to evaluate.
 * @c: The delimiter character.
 *
 * The function counts how many characters (letters) are in the next word,
 * which is defined as the substring before 
 * the next occurrence of the delimiter 'c'.
 *
 * Return: The number of letters in the word.
 */
static int	count_letters(const char *s, char c)
{
	int	i;
	int	qt_letras;

	i = 0;
	qt_letras = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		qt_letras++;
		i++;
	}
	return (qt_letras);
}

/**
 * copy_words - Copies a word from the string into a newly allocated string.
 * @s: The input string containing the word.
 * @a: The length of the word to copy.
 *
 * The function allocates memory and copies 'a' characters from the string 's'
 * into a new string. The resulting string is null-terminated.
 *
 * Return: A pointer to the newly allocated string, 
 * or NULL if memory allocation fails.
 */
static char	*copy_words(const char *s, int a)
{
	int		i;
	char	*to_array;

	i = 0;
	to_array = (char *)malloc(sizeof(char) * (a + 1));
	if (!to_array)
		return (0);
	while (a--)
	{
		to_array[i] = s[i];
		i++;
	}
	to_array[i] = 0;
	return (to_array);
}

/**
 * free_array - Frees an array of strings in case of failure.
 * @s: The array of strings to free.
 * @a: The number of words to free.
 *
 * The function frees all allocated memory for the words stored in the array
 * up to index 'a', and then frees the array itself. 
 * This is used to clean up when an error occurs during memory allocation.
 *
 * Return: Always returns NULL to indicate an error.
 */
static char	**free_array(const char **s, int a)
{
	while (a > 0)
	{
		a--;
		free((void *)s[a]);
	}
	free(s);
	return (NULL);
}
