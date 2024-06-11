/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:03:05 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:03:53 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n);

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*str_convert;

	nbr = n;
	i = n_len(nbr);
	str_convert = malloc(sizeof(char) * n_len(nbr) + 1);
	if (!str_convert)
		return (0);
	str_convert[i] = '\0';
	if (nbr == 0)
		str_convert[0] = '0';
	if (nbr < 0)
	{
		str_convert[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str_convert[--i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	return (str_convert);
}

static int	n_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-623));
// 	//printf("%s\n", itoa(-623));
// 	printf("%s\n", ft_itoa(156));
// 	//printf("%s\n", itoa(156));
// 	printf("%s\n", ft_itoa(-0));
// 	//printf("%s\n", itoa(-0));
// 	return(0);
// }