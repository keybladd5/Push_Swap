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
int		*init_arr(char **str)
{
	int	*arr;
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	arr = (int *)malloc(sizeof(int) * (i));
	while (i > 0)
	{
		arr[i] = atol(str[i]);
		i--;
	}
	return (arr);
}

t_node	*init_list(int *arr, unsigned int len, t_node **head)
{
	t_node	*node;

	while (len--)
	{
		node = ft_lstnew_last(*arr, head);
		arr++;
	}
	*head = ft_lstfirs(node);
	return (*head);
}

/*int main()
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
}*/