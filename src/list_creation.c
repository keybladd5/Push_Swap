/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:51:30 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/16 10:51:33 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Funcion para iniciar la lista y 
//asignar cada numero del array a un nuevo nodo

void	init_list(int *arr, unsigned int len, t_node **head)
{
	t_node	*node;

	node = NULL;
	while (len--)
	{
		node = ft_lstnew_last(*arr, head);
		arr++;
	}
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    unsigned int len = 5;
	t_node *head = NULL;
    init_list(arr, len, &head);

	while (head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}

    return 0;
}