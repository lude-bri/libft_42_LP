/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:51:44 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 10:50:55 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*re;

	i = 0;
	re = (unsigned char *)s;
	while (i < n)
	{
		if (re[i] == (unsigned char) c)
			return ((void *) &re[i]);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	// char	str[] = "/|\x12\xff\x09\0\x42\042\0\42|\\";
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	//int	size = 12;
// 	// printf("%s\n", (char *)ft_memchr(str, '\0', size));
// 	// printf("%s\n", (char *)memchr(str, '\0', size));
// 	// printf("%s\n", (char *)memchr(str, '\0', size));
// 	printf("%s\n", (char *)ft_memchr(s, 0, 1));
// 	printf("%s\n", (char *)memchr(s, 0, 1));
// 	printf("%s\n", (char *)ft_memchr(s, 2, 3));
// 	printf("%s\n", (char *)memchr(s, 2, 3));
// 	printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3));
// 	printf("%s\n", (char *)memchr(s, 2 + 256, 3));
// 	return (0);
// }