/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:01:11 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/18 12:01:13 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_node **head)
{
	t_node	*last_node;

	last_node = lst_findlast(*head);
	*head = (*head)->next; // head=1
	(*head)->prev->next = NULL; // 0 last
	(*head)->prev->prev = last_node; // 0->prev=last
	last_node->next = (*head)->prev; // last->next=0
	(*head)->prev = NULL; // 1 first
}

void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}