/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:31:46 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/26 20:31:48 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	set_index(t_node *stack)
{
	int		i;
	int 	stack_half;

	stack_half = ft_lstsize(stack) / 2;
	i = 0;
	while(stack)
	{
		stack->index = i;
		if (i <= stack_half)
			stack->upper_half = true;
		else
			stack->upper_half = false;
		i++;
		stack = stack->next;
	}

	return ()
}

void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int stack_len;

	stack_len = ft_lstsize(*stack_a);
	
	if (check_is_sorted(&stack_a) == 1)
		return ;
	
	pb(a, b);
	pb(a, b);

	while (*a)
	{
		set_index(*a);
		set_index(*b);
	}
}