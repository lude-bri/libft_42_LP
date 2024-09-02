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
	if(str == 'c')
		count = ft_putchar(va_arg(a, int));//printa um single char;
	else if(str == 's')
		count = ft_putstr(va_arg(a, char *)); //printa uma string;
	else if(str == 'p')
		count = ft_putptr(va_arg(a, long int));//o void * pointer argument printa em hexadecimal
	else if(str == 'd' || str == 'i')
		count = ft_putnbr(va_arg(a, int));//printa um numero decimal (base 10)
	else if(str == 'u')
		count = ft_putudec(va_arg(a, int));//printa um numero unsigned decimal base 10
	else if(str == 'x' || str == 'X')
		count = ft_puthex(str, va_arg(a, unsigned int));
	else if(str == '%')
		count = ft_putchar('%'); //printa um sinal de porcentagem
	return (count);
}

int	main(void)
{
	char c = 'k'; // %c
	char *str = "String test"; // %s
	char *var; var = &c;// %p
	int	nbr = -5;// %d // %i
	unsigned int nbrr = 20;// %u
	int b= 0xffffffff;// %x // %X
	// %%
	int i;
	printf("\n");
	printf("MEU PRINTF:\n");
	i = ft_printf("| TEST TEXT |\n| Single Char: %c |\n| String: %s |\n| Pointer Adress: %p |\n| Decimal: %d |\n| Integer %i |\n| Unsign deci: %u |\n| HexLower: %x |\n| HexUpper: %X |\n| Percentage sign: %% |\n", c, str, var, nbr, nbr, nbrr, b, b);
	printf("\nReturn Value: %d", i);
	///////////////////////////////
	printf("\n");
	printf("\nPRINTF ORIGINAL:\n");
	i = printf("| TEST TEXT |\n| Single Char: %c |\n| String: %s |\n| Pointer Adress: %p |\n| Decimal: %d |\n| Integer %i |\n| Unsign deci: %u |\n| HexLower: %x |\n| HexUpper: %X |\n| Percentage sign: %% |\n", c, str, var, nbr, nbr, nbrr, b, b);
	printf("\nReturn Value: %d\n", i);
	
	// int b= 0xffffffff;// %x // %X
	// // %%
	// int i;
	// printf("\n");
	// printf("MEU PRINTF:\n");
	i = ft_printf("HexLower: %x |\n| HexUpper: %X |\n|", b, b);
	printf("\nReturn Value: %d", i);
	return (0);
	// int	bts;

	// bts = 0xffffffff;
	// ft_printf("%x", bts);
	// printf("\n");
	// printf("%x", bts);
	// return (0);
}
