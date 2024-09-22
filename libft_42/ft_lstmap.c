/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:46:34 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:00:51 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Iterates over a linked list and applies a function 
 * to each element's content.
 * It creates a new list resulting from the successive applications 
 * of the function.
 * @lst: The first element of the list to map.
 * @f: A function pointer to apply to the content of each element.
 * @del: A function pointer to delete the content in case of an error.
 *
 * The function creates a new list by applying the function 'f' 
 * to each element's content of the given list 'lst'. 
 * If an allocation fails or an error occurs, the 'del' function
 * is called to free the allocated memory. 
 * If successful, the new list is returned.
 *
 * Return: A new list with modified content, or NULL if memory allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_node;
	void	*tmp_cnt;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	while (lst)
	{
		tmp_cnt = (*f)(lst->content);
		if (tmp_cnt)
			tmp_node = ft_lstnew(tmp_cnt);
		if (!tmp_node || !tmp_cnt)
		{
			ft_lstclear(&new_lst, del);
			(*del)(tmp_cnt);
			return (0);
		}
		ft_lstadd_back(&new_lst, tmp_node);
		lst = lst->next;
	}
	return (new_lst);
}
