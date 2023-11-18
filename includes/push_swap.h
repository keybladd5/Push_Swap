/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:52:16 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/16 10:52:19 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

//Struc definition
typedef struct s_node {
	int data;
	struct s_node *next;
	struct s_node *prev;
}		t_node;

//Functions to run the struc
t_node	*ft_lstnew_last(int content, t_node **head);

t_node	*ft_lstlast(t_node *lst);

//Functions to move the stacks
void	swap(t_node **head);

void	sa(t_node **a);

void	sb(t_node **b);

void	ss(t_node **a, t_node **b);

void	rotate(t_node **head);

void	ra(t_node **a);

void	rb(t_node **b);

void	rr(t_node **a, t_node **b);

//Funtion to validate the arguments
int 	ft_atol(char const *str);


#endif
