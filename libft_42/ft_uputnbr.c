/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:19:32 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 10:19:42 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uputnbr(unsigned int n)
{
	int	len;

	len = ft_numlen(n, 10);
	if (n >= 10)
		ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
