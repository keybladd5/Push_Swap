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
// FUNCTION TO TEST THE PROGRAM
void	print_stack(t_node **head, char c)
{
	t_node	*current = *head;
	printf("Stack %c: ", c);
	while (current)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

// FUNCTION TO TEST THE PROGRAM
void	support_main_movements(t_node *stack_a, t_node *stack_b)
{
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	/*sa(&stack_a);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');*/

	while (stack_a)
	{
		pb(&stack_a, &stack_b);
		print_stack(&stack_a, 'a');
		print_stack(&stack_b, 'b');
	}

	sa(&stack_a);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	sb(&stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	ss(&stack_a, &stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	while (stack_b)
	{
		pb(&stack_b, &stack_a);
		print_stack(&stack_a, 'a');
		print_stack(&stack_b, 'b');
	}

	ra(&stack_a);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	rb(&stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	rr(&stack_a, &stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	while (stack_a)
	{
		pb(&stack_a, &stack_b);
		print_stack(&stack_a, 'a');
		print_stack(&stack_b, 'b');
	}

	rra(&stack_a);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	rrb(&stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');

	rrr(&stack_a, &stack_b);
	print_stack(&stack_a, 'a');
	print_stack(&stack_b, 'b');
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	int *arr;
	t_node *stack_a;
	t_node *stack_b;

    //si no te mandan numeros!!!
	arr = init_arr(argv);
	if (!arr)
		return (0);
	//here calls to error functions
	stack_a = init_list(arr, (argc - 1), &stack_a);
	if (!stack_a)
		return (free(arr), 0);
	free(arr);
	//here calls to algoritm
	support_main_movements(stack_a, stack_b);
	ft_free_list(&stack_a);
	ft_free_list(&stack_b);

}
