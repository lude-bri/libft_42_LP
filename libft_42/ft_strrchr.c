/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:07:39 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:36:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*a;

	i = 0;
	cc = (char)c;
	a = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			a = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		a = (char *) &s[i];
	return (a);
}

// int	main(void)
// {
// 	const char str[] = "reclaracao dos direitos humanos";
// 	const char ch = 'd';
// 	const char	*ret;
// 	ret = ft_strrchr(str, ch);
// 	printf("String depois da |%c| e - |%s|\n", ch, ret);
// 	return (0);
// }