/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luigi <luigi@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:14:47 by luigi             #+#    #+#             */
/*   Updated: 2024/12/19 09:14:58 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fprintf.h"

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list		ap;
	char		*str;
	t_format	p;

	if (!format || *format == '\0')
		return (0);
	p = ft_fnewformat();
	str = ft_strdup(format);
	if (!str || *str == '\0')
		return (0);
	va_start(ap, format);
	ft_fparse_bonus(str, ap, &p, fd);
	va_end(ap);
	free(str);
	return (p.len);
}
