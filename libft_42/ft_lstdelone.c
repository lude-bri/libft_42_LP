/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 08:41:08 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 12:57:59 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstdelone - Deletes a single element of a linked list.
 * @lst: The element to delete.
 * @del: A function pointer to the function used to delete the content 
 * of the element.
 *
 * The function deletes the content of the element using the 'del' function,
 * and then frees the memory allocated for the element itself. 
 * It does not affect the next elements in the list.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
