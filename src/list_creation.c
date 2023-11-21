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
	int len;
	int i;

	len = 1;
	i = 0;
	while (str[len])
		len++;
	arr = (int *)malloc(sizeof(int) * (len));
	while (i < (len - 1))
	{
		arr[i] = ft_atol(str[i+1]);
		i++;
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
