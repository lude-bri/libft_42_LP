/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:54:07 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:05:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return ((char *)str);
}

// int	main(void)
// {
// 	char	str[] = "abcdef";
// 	char	str2[] = "***189543***";
// 	printf("%s\n", ft_substr(str, 2, 3));
// 	printf("%s\n", ft_substr(str, 5, 10));
// 	printf("%s\n", ft_substr(str2, 4, 6));
// 	return (0);
// }