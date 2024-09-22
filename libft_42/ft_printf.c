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

/**
 * ft_printf - A simplified version of the printf function for formatted output.
 * @s: The format string, which may contain format specifiers.
 * 
 * The function processes the format string 's' and 
 * prints it to the standard output.
 * It recognizes several format specifiers (e.g., %c, %s, %d, %x, etc.) 
 * to format and
 * print arguments passed after the format string. 
 * The va_list is used to handle a variable number of arguments. 
 * The function counts the total number of characters printed 
 * and returns that count.
 *
 * Supported format specifiers:
 *  - %c: Character
 *  - %s: String
 *  - %p: Pointer
 *  - %d, %i: Signed integer
 *  - %u: Unsigned integer
 *  - %x, %X: Hexadecimal (lowercase or uppercase)
 *  - %%: Literal '%' character
 *
 * Return: The total number of characters printed.
 */
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

/**
 * f_specifiers - Handles the formatting of specific format specifiers.
 * @str: The format specifier character (e.g., 'c', 'd', 's', etc.).
 * @a: The va_list containing the arguments for formatting.
 *
 * This helper function processes a single format specifier and calls the
 * appropriate function to handle the formatting and printing of the argument.
 * It returns the number of characters printed for that specifier.
 *
 * Return: The number of characters printed for the given format specifier.
 */
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
