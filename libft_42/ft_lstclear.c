/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:56:34 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:07:16 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstclear - Deletes and frees all elements of a linked list.
 * @lst: A pointer to the first element of the list.
 * @del: A function pointer to the function used to delete the content 
 * of each element.
 *
 * The function iterates through the entire linked list, deleting each element
 * using the 'del' function and freeing the memory. After clearing the list,
 * the list pointer is set to NULL to indicate that the list is empty.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*atual;

	atual = *lst;
	if (!lst || !del)
		return ;
	while (atual)
	{
		tmp = atual;
		atual = atual->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}
