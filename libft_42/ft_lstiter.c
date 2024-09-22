/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:45:56 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 10:58:46 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstiter - Iterates through a linked list and applies a function 
 * to each element.
 * @lst: The first element of the list.
 * @f: A function pointer to the function to apply to each element's content.
 *
 * The function iterates through each element of the linked list and applies the
 * provided function 'f' to the content of each element. It does not modify the
 * structure of the list itself, only applies the function to the content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
