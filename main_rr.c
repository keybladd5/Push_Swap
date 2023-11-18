/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:34:29 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/18 15:34:31 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void    print_stack(t_node **head)
{
    t_node    *current = *head;

    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int    main()
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
  

    print_stack(&a);

    rra(&a);
    print_stack(&a);
    

    return (0);
}