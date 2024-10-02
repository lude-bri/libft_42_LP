/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:36:43 by luigi             #+#    #+#             */
/*   Updated: 2024/09/13 17:38:47 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncat - Concatenates up to 'n' characters from the source string 
 * to the destination string.
 * @dest: The destination string to which 'src' will be appended.
 * @src: The source string to append to 'dest'.
 * @n: The maximum number of characters to append from 'src'.
 *
 * The function appends up to 'n' characters from the source string 'src' 
 * to the end of the destination string 'dest'. 
 * The destination string must be null-terminated, and the resulting string will
 * also be null-terminated. 
 * 
 * If 'src' has fewer than 'n' characters, the entire string is appended.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
