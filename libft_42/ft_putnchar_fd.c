/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:14:13 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 14:14:22 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnchar_fd(char c, int fd, int n)
{
	int	len;

	len = 0;
	if (n < 0)
		return (-1);
	while (n-- > 0)
	{
		if (write(fd, &c, 1) == -1)
			return (-1);
		++len;
	}
	return (len);
}
