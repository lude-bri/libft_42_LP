/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:31:39 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:03:05 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstsize - Counts the number of elements in a linked list.
 * @lst: The first element of the list.
 *
 * The function iterates through the linked list and counts the number 
 * of elements.
 * It increments a counter for each node until it reaches the end of the list.
 *
 * Return: The total number of elements in the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
