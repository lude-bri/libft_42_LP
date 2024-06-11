/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:41:33 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/01 15:33:54 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	size_t			x;
	unsigned char	*a;

	i = 0;
	x = '\0';
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = x;
		i++;
	}
}
