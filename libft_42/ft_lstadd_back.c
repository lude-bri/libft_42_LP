/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 08:17:29 by lude-bri          #+#    #+#             */
/*   Updated: 2024/12/24 12:31:19 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_back - Adds a new_list element at the end of a linked list.
 * @lst: A pointer to the first element of the list.
 * @new_list: The new_list element to be added to the list.
 *
 * The function adds the new_list element 'new_list' 
 * to the end of the linked list.
 * If the list is empty (*lst is NULL), the new_list element becomes 
 * the first element.
 * Otherwise, the function traverses the list to find 
 * the last element and attaches the new_list element to the end of the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new_list)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new_list;
		return ;
	}
	last->next = new_list;
}
