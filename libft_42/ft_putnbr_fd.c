/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:36:48 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 12:46:39 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putnbr_fd - Writes an integer to a specified file descriptor.
 * @n: The integer to print.
 * @fd: The file descriptor to write to.
 *
 * The function writes the integer 'n' to the file descriptor 'fd'. It handles
 * negative numbers by printing the '-' sign and recursively printing 
 * the absolute value of the integer. Special handling is provided 
 * for the minimum value of a 32-bit signed integer, 
 * as its absolute value exceeds the positive range.
 */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		c = n + 48;
		write(fd, &c, 1);
	}
}
