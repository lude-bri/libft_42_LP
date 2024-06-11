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

static int	n_palavras(const char *s, char c);
static int	n_letras(const char *s, char c);
static char	*copiar_palavras(const char *s, int a);
static char	**free_array(const char **s, int a);

char	**ft_split(char const *str, char c)
{
	int		i;
	int		w;
	int		l;
	char	**array;

	i = 0;
	w = n_palavras(str, c);
	array = (char **)malloc((sizeof(char *) * (w + 1)));
	if (!array)
		return (0);
	while (w--)
	{
		while (*str == c && *str)
			str++;
		l = n_letras(str, c);
		array[i] = copiar_palavras((const char *)str, l);
		if (!array[i])
			return (free_array((const char **)array, i));
		i++;
		while (*str != c && *str)
			str++;
	}
	array[i] = 0;
	return (array);
}

static int	n_palavras(const char *s, char c)
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

static int	n_letras(const char *s, char c)
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

static char	*copiar_palavras(const char *s, int a)
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

// int main (int ac, char **av)
// {
// 	(void)ac;
// 	int i = 0;
// 	const char *str = av[1];
// 	char *c = av[2];
// 	char **matrix;
// 	matrix = ft_split(str, c[0]);
// 	while (matrix[i])
// 		printf("%s\n", matrix[i++]);
// 	return (0);