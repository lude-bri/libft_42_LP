/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:30:53 by lude-bri          #+#    #+#             */
/*   Updated: 2024/12/19 14:01:58 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putchar_fd - Writes a character to a specified file descriptor.
 * @c: The character to print.
 * @fd: The file descriptor to write to.
 *
 * The function writes the given character 'c' to the file descriptor 'fd'.
 * This allows the character to be written to various outputs, such as standard
 * output, a file, or standard error, depending on the value of 'fd'.
 */
int	ft_putchar_fd(char c, int fd)
{
	return ((int)write(fd, &c, 1));
}
