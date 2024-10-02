/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:32:56 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:07:59 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putstr_fd - Writes a string to a specified file descriptor.
 * @s: The string to print.
 * @fd: The file descriptor to write to.
 *
 * The function writes the string 's' to the specified file descriptor 'fd'.
 * It iterates through each character of the string and prints it 
 * to the file descriptor.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
