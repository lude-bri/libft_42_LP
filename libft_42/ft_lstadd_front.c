/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:20 by lude-bri          #+#    #+#             */
/*   Updated: 2024/10/31 15:43:38 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Adds a new element at the beginning of a linked list.
 * @lst: A pointer to the first element of the list.
 * @new_list: The new element to be added to the list.
 *
 * The function inserts the new element 'new_list' at the beginning of the 
 * linked list.
 * The new element's 'next' pointer is set to the current first element, 
 * and then the list pointer is updated to point to the new element.
 */
void	ft_lstadd_front(t_list **lst, t_list *new_list)
{
	new_list->next = *lst;
	*lst = new_list;
}
