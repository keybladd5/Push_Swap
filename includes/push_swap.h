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

//Funtion to validate the arguments
int 	ft_atol(char const *str);


#endif
