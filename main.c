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

int	main(int argc, char **argv)
{
	int		*arr;
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	ft_check_isnbr(argc, argv);
	arr = init_arr(argv);
	if (!arr)
		return (0);
	ft_check_isrepeated(arr, (argc - 1));
	stack_a = init_list(arr, (argc - 1), &stack_a);
	if (!stack_a)
		return (free(arr), 0);
	free(arr);

	//here calls to algoritm
	support_main_movements(stack_a, stack_b);//this ONLY 4 test
	ft_free_list(&stack_a);
	return (0);
}
