/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:31:20 by luigi             #+#    #+#             */
/*   Updated: 2024/10/25 13:42:04 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int to_free)
{
	char	*new_str;

	new_str = ft_strjoin(s1, s2);
	if (to_free == 1 || to_free == 3)
	{
		free(s1);
		s1 = NULL;
	}
	if (to_free == 2 || to_free == 3)
	{
		free(s2);
		s2 = NULL;
	}
	return (new_str);
}
