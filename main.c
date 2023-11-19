/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:41:09 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/19 20:41:11 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
void	print_stack(t_node **head)
{
	t_node	*current = *head;

	while (current)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	int *arr;
	t_node *stack_a;
	t_node *stack_b;

	arr = init_arr(argv);
	stack_a = init_list(arr, (argc - 1), &stack_a);

	print_stack(&stack_a);
	print_stack(&stack_b);

	sa(&stack_a);
	print_stack(&stack_a);
	print_stack(&stack_b);

	pb(&stack_a, &stack_b);
	print_stack(&stack_a);
	print_stack(&stack_b);
}
