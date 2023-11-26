/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:31:52 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/26 17:31:54 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Check if the list is sorted
int	check_is_sorted(t_node **stack_a)
{
	int i;

	while((*stack_a)->next)
	{
		i = (*stack_a)->data;
		*stack_a = (*stack_a)->next;
		if ((*stack_a)->data < i)
			return (0);
	}
	return (1);
}

//Return the max number in the list
int	list_max(t_node **stack)
{
	int i;

	while((*stack)->next)
	{
		i = (*stack)->data;
		*stack = (*stack)->next;
		if (i > (*stack)->data)
			i = (*stack)->data;
	}
	return (i);
}

//Return the min number in the list
int	list_min(t_node **stack)
{
	int i;

	while((*stack)->next)
	{
		i = (*stack)->data;
		*stack = (*stack)->next;
		if (i < (*stack)->data)
			i = (*stack)->data;
	}
	return (i);
}
