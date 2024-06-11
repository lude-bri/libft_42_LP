/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:39:35 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/01 15:01:36 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while ((i < size - 1) && (src[i]))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	d[10];
// 	char	s[10];
// 	printf("%d\n", strlcpy((void *)0 , (void *)0, 10));
// 	printf("%zu\n", ft_strlcpy((void *)0 , (void *)0, 10));
// 	return (0);
// }