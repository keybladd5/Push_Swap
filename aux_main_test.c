/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_main_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:00:08 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/23 13:00:10 by polmarti         ###   ########.fr       */
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

//Another main to test whitout command lines
/*int	main()
{
	t_node    *a;
    a = malloc(sizeof(t_node));
    a->data = 0;
    a->prev = NULL;
    a->next = malloc(sizeof(t_node));
    a->next->data = 1;
    a->next->prev = a;
    a->next->next = malloc(sizeof(t_node));
    a->next->next->data = 2;
    a->next->next->prev = a->next;
    a->next->next->next = malloc(sizeof(t_node));
    a->next->next->next->data = 3;
    a->next->next->next->prev = a->next->next;
    a->next->next->next->next = NULL;

	t_node    *b;
    b = malloc(sizeof(t_node));
    b->data = 4;
    b->prev = NULL;
    b->next = malloc(sizeof(t_node));
    b->next->data = 5;
    b->next->prev = b;
    b->next->next = malloc(sizeof(t_node));
    b->next->next->data = 6;
    b->next->next->prev = b->next;
    b->next->next->next = malloc(sizeof(t_node));
    b->next->next->next->data = 7;
    b->next->next->next->prev = b->next->next;
    b->next->next->next->next = NULL;

	print_stack(&a);
	print_stack(&b);

	sa(&a);
	print_stack(&a);
	print_stack(&b);

	sb(&b);
	print_stack(&a);
	print_stack(&b);

	ss(&a, &b);
	print_stack(&a);
	print_stack(&b);

	ra(&a);
	print_stack(&a);
	print_stack(&b);

	rb(&b);
	print_stack(&a);
	print_stack(&b);

	rr(&a, &b);
	print_stack(&a);
	print_stack(&b);

	rra(&a);
	print_stack(&a);
	print_stack(&b);

	rrb(&b);
	print_stack(&a);
	print_stack(&b);

	rrr(&a, &b);
	print_stack(&a);
	print_stack(&b);

	pa(&a, &b);
	print_stack(&a);
	print_stack(&b);

	pb(&a, &b);
	print_stack(&a);
	print_stack(&b);

	return (0);
}*/