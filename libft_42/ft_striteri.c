/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:27:19 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:02:41 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_striteri - Applies a function to each character of a string, 
 * passing the index as an argument.
 * @s: The string to iterate over.
 * @f: The function to apply to each character, 
 * with the current index as the first argument.
 *
 * The function iterates over each character of the string 's' 
 * and applies the function 'f'
 * to each character. The function 'f' takes two arguments: 
 * the current index and a pointer to the character being processed. 
 *
 * This allows for in-place modification of the string based
 * on the character and its position.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
