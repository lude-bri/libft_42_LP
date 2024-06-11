/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:15:38 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/20 10:32:25 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nprt)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nprt[i] == 32) || (nprt[i] >= 9 && nprt[i] <= 13))
		i++;
	if (nprt[i] == '+' || nprt[i] == '-')
	{
		if (nprt[i] == '-')
			sign *= -1;
		i++;
	}
	while (nprt[i] >= 48 && nprt[i] <= 57)
	{
		result = (result * 10) + (nprt[i] - '0');
		i++;
	}
	return (result * sign);
}
// int	main(void)
// {
// 	char	s[] = "\e475";
// 	char	s1[] = "-3423523";
// 	char	s2[] = "+-+--1315";
// 	printf("%d\n", ft_atoi(s));
// 	printf("%d\n", atoi(s));
// 	printf("%d\n", ft_atoi(s1));
// 	printf("%d\n", atoi(s1));
// 	printf("%d\n", ft_atoi(s2));
// 	printf("%d\n", atoi(s2));
// 	return (0);
// }