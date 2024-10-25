/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:04:52 by lude-bri          #+#    #+#             */
/*   Updated: 2024/10/25 13:44:54 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strjoin - Concatenates two strings into a newly allocated string.
 * @s1: The first string.
 * @s2: The second string.
 *
 * The function allocates memory for a new string, 
 * which is the result of concatenating 's1' and 's2'.
 * It copies the contents of 's1' followed by the contents of 's2' into
 * the newly allocated memory. The new string is null-terminated.
 *
 * Return: A pointer to the newly allocated string containing 
 * the concatenation of 's1' and 's2', or NULL if memory allocation fails.
 */
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	i;
// 	size_t	j;
// 	char	*new_str;
//
// 	i = 0;
// 	j = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
// 	if (!new_str)
// 		return (0);
// 	while (s1[i])
// 	{
// 		new_str[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j])
// 	{
// 		new_str[i++] = s2[j];
// 		j++;
// 	}
// 	new_str[i] = 0;
// 	return (new_str);
// }

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*tmp;
	char	*new;

	i = 0;
	if (!*s1)
		*s1 = '\0';
	if (!s1 || !s2)
		return (NULL);
	tmp = s1;
	new = malloc((ft_strlen(s1) + ft_strlen(s2)+ 1) * sizeof(char));
	if (!new)
		return (NULL);
	if (s1)
		while (*s1)
			new[i++] = *s1++;
	while (*s2)
		new[i++] = *s2++;
	new[i] = '\0';
	if (tmp)
		free(tmp);
	return (new);
}
