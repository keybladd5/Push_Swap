/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:53:04 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/16 11:53:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*int	main(int argc, char **argv)
{
	if (argc == 1 || ) 
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if
}*/

// test print list
#include <stdio.h>
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


int	main()
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
}