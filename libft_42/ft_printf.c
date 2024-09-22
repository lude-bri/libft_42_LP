/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:11:29 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/02 19:30:22 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_specifiers(char str, va_list a);

int	ft_printf(const char *s, ...)
{
	int				result;
	int				i;
	va_list			args;
	unsigned char	*str;

	i = 0;
	result = 0;
	str = (unsigned char *)s;
	va_start(args, s);
	while (str[i])
	{
		if (str[i] == '%' && str[i])
		{
			result += f_specifiers(str[i + 1], args);
			i++;
		}
		else if (str[i] != '%' && str[i])
			result += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (result);
}

static int	f_specifiers(char str, va_list a)
{
	int	count;

	count = 0;
	if (str == 'c')
		count = ft_putchar(va_arg(a, int));
	else if (str == 's')
		count = ft_putstr(va_arg(a, char *));
	else if (str == 'p')
		count = ft_putptr(va_arg(a, long int));
	else if (str == 'd' || str == 'i')
		count = ft_putnbr(va_arg(a, int));
	else if (str == 'u')
		count = ft_putudec(va_arg(a, int));
	else if (str == 'x' || str == 'X')
		count = ft_puthex(str, va_arg(a, unsigned int));
	else if (str == '%')
		count = ft_putchar('%');
	return (count);
}
