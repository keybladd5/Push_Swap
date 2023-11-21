/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:45:02 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/30 20:45:03 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Crea un nodo
t_node	*ft_lstnew_last(int content, t_node **head)
{
	t_node	*new_node;
	t_node 	*prev_node;

	new_node = NULL;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (0);
	new_node->data = content;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		prev_node = ft_lstlast(*head);
		prev_node->next = new_node;
		new_node->prev = prev_node;
	}
	return (new_node);
}


//Funcion para llegar al final de la lista
t_node	*ft_lstlast(t_node *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

//Funcion para llegar al principio de la lista
t_node	*ft_lstfirs(t_node *lst)
{
	if (lst)
	{
		while (lst->prev)
			lst = lst->prev;
	}
	return (lst);
}

void	ft_free_list(t_node **head)
{
	t_node	*to_iter;

	if (!*head)
		return ;
	while (to_iter)
	{
		*head = (*head)->next;
		free(to_iter);
		to_iter = *head;
	}
}
