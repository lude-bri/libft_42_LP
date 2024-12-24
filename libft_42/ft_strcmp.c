/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:28:01 by luigi             #+#    #+#             */
/*   Updated: 2024/12/24 12:30:16 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
//
// int ft_strcmp(const char *s1, const char *s2)
// {
//     int i;
//     i = 0;
//     while (s1[i] || s2[i])
//     {
//         if (s1[i] != s2[i])
//             return ((unsigned char)s1[i] - (unsigned char)s2[i]);
//         i++;
//     }
//     return (0);
// }
