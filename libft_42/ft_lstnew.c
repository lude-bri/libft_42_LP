/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:45 by lude-bri          #+#    #+#             */
/*   Updated: 2024/04/27 13:05:05 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstnew - Creates a new linked list node.
 * @content: The content to store in the new node.
 *
 * The function allocates memory for a new linked list node 
 * and initializes its content with the provided value. 
 * The 'next' pointer of the new node is set to NULL.
 * If the memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the newly created node, 
 * or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
