/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:37:37 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/23 11:17:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	printf("%d\n", ft_memcmp(s, sCpy, 4));
// 	printf("%d\n", memcmp(s, sCpy, 4));
// 	size_t size = 10;
// 	char	*b1 = eletric_alloc(size);
// 	char	*b2 = eletric_alloc(size);
// 	strcpy(b1, ".........");
// 	strcpy(b2, ".........");
// 	printf("%d\n", ft_memcmp(s, sCpy, 4));
// 	printf("%d\n", ft_memcmp(s, sCpy, 4));
// 	return (0);
// }