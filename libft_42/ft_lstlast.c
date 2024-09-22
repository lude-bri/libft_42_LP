/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 07:49:36 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 12:55:18 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstlast - Returns the last element of a linked list.
 * @lst: The first element of the list.
 *
 * The function iterates through the linked list to find and return 
 * the last element.
 * If the list is empty (i.e., 'lst' is NULL), it returns NULL.
 *
 * Return: The last element of the list, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
