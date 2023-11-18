/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:23:28 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/18 12:23:30 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	reverse_rotate(t_node **head)
{
	t_node	*last_node;

	last_node = lst_last(*head); //
	last_node->prev->next = NULL;//nodo anterior al ultimo su next apunta a null
	(*head)->prev = last_node;//primer nodo, su prev pasa a apuntar al ultimo
	last_node->next = *head; // ultimo nodo, su next pasa a apuntar al primero
	last_node->prev = NULL; // ultimo nodo, su prev pasa a apuntar a NULL
	*head = last_node; // el head apunta a el que es ahora el primer elemento
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 3);
}

void	rrb(t_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 3);
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 3);
}