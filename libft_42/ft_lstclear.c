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
