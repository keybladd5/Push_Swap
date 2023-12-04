/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:10:06 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/24 13:33:32 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static	void	push(t_node **src, t_node **dst)
{
	t_node	*node_topush;

	node_topush = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	if (*dst)
	{
		node_topush->next = *dst;
		(*dst)->prev = node_topush;
		*dst = node_topush;
	}
	else
	{
		node_topush->next = NULL;
		*dst = node_topush;
	}
}

void	pa(t_node **a, t_node **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
