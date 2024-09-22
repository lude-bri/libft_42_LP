/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:07:16 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 18:47:37 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexlong(int long n);

int	ft_putptr(long int n)
{
	int	count;

	count = 0;
	write (1, "0x", 2);
	count += ft_puthexlong(n);
	return (count + 2);
}

int	ft_puthexlong(int long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_puthexlong(n / 16);
		ft_puthexlong(n % 16);
	}
	else
	{
		write(1, &base[n], 1);
		count++;
	}
	return (count);
}
