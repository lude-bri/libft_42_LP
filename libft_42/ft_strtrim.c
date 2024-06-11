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

static int	ft_aparar(char const *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (ft_aparar(set, s1[i]))
		i++;
	while (ft_aparar(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, i, j - i));
}

static int	ft_aparar(char const *set, char c)
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

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("abcd", ""));
// 	return (0);
// }