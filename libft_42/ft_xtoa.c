/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 12:28:48 by luigi             #+#    #+#             */
/*   Updated: 2024/12/24 12:28:51 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_hexlen(long nb);
static char		*ft_xtos(unsigned long int nb, char *str, size_t len);

char	*ft_xtoa(unsigned long int nb, int is_upper)
{
	size_t	len;
	char	*str;
	int		i;

	str = 0;
	len = ft_hexlen(nb);
	str = ft_xtos(nb, str, len);
	if (!str)
		return (NULL);
	if (is_upper)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'f')
				str[i] -= 32;
			i++;
		}
	}
	return (str);
}

static size_t	ft_hexlen(long nb)
{
	size_t	len;

	len = 0;
	if (!nb)
		return (1);
	while (nb >= 1)
	{
		nb /= 16;
		++len;
	}
	return (len);
}

static char	*ft_xtos(unsigned long int nb, char *str, size_t len)
{
	int	mod;

	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	--len;
	while (len != (size_t)-1)
	{
		mod = nb % 16;
		if (mod < 10)
			str[len] = mod + '0';
		else if (mod >= 10)
			str[len] = (mod - 10) + 'a';
		nb = nb / 16;
		len--;
	}
	return (str);
}
