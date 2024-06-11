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
