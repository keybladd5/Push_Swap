/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:45:11 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/19 17:45:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_node **a, t_node **b)
{
	if (!*b)
        return ;
    *a = (*a)->next;
    (*a)->prev->prev = (*b)->next->prev;
    *b = (*b)->next; 
    (*b)->prev->next = (*a)->prev;
    (*b)->prev = NULL;
    *a = (*a)->prev->prev;

	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	if (!*a)
        return ;
    *b = (*b)->next;
    (*b)->prev->prev = (*a)->next->prev;
    *a = (*a)->next; 
    (*a)->prev->next = (*b)->prev;
    (*a)->prev = NULL;
    *b = (*b)->prev->prev;

	write(1, "pb\n", 3);
}