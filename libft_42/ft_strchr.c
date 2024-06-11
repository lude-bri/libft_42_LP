/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:05:25 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 09:36:10 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] != cc)
			i++;
		else
			return ((char *) &s[i]);
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	else
		return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "reclaracao dos direitos humanos";
// 	const char ch = 'd';
// 	const char	*ret;
// 	ret = ft_strchr(str, ch);
// 	printf("String depois da |%c| e - |%s|\n", ch, ret);
// 	return (0);
// }