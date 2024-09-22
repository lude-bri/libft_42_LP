/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:35:20 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/26 13:21:11 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Adds a new element at the beginning of a linked list.
 * @lst: A pointer to the first element of the list.
 * @new: The new element to be added to the list.
 *
 * The function inserts the new element 'new' at the beginning of the 
 * linked list.
 * The new element's 'next' pointer is set to the current first element, 
 * and then the list pointer is updated to point to the new element.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
