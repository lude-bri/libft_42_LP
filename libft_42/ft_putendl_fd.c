/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:35:11 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:02:06 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putendl_fd - Writes a string to a specified file descriptor, 
 * followed by a newline.
 * @s: The string to print.
 * @fd: The file descriptor to write to.
 *
 * The function writes the given string 's' to the file descriptor 'fd', followed
 * by a newline character ('\n'). This is useful for printing a string 
 * with a newline to a specific output, such as standard output, 
 * standard error, or a file.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
