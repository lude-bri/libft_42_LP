/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:03:48 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/29 16:56:57 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncmp - Compares up to 'n' characters of two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @n: The maximum number of characters to compare.
 *
 * The function compares the two strings 's1' and 's2' up to 'n' characters 
 * or until a null character is encountered. It compares the characters 
 * as unsigned values. 
 *
 * If the strings differ within the first 'n' characters, the difference between 
 * the first differing characters is returned. If the strings are identical 
 * for 'n' characters, it returns 0.
 *
 * Return: An integer less than, equal to, or greater than 0 if 's1' is 
 * found to be less than, equal to, or greater than 's2', respectively.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && n > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
