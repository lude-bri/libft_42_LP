/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:59:26 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 11:00:20 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrn_fd(char *str, int fd, int n)
{
	if (!str || (fd < 0) || (n < 0))
		return (0);
	if (str)
		return ((int)write(fd, str, n));
	return (0);
}
//
// int main (int argc, char *argv[])
// {
// 	char *str;
// 	int fd;
// 	int n;
// 	int len;
//
// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <str> <fd> <n>\n", argv[0]);
// 		return (0);
// 	}
//
// 	str = argv[1];
// 	fd = ft_atoi(argv[2]);
// 	n = ft_atoi(argv[3]);
//
// 	len = ft_putstrn_fd(str, fd, n);
// 	printf("\nft_printf: %d\n", len);
// }
