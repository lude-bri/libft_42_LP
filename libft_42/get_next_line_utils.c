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

size_t	ft_strlen_gnl(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}
