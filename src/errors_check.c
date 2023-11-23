/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:22:40 by polmarti          #+#    #+#             */
/*   Updated: 2023/11/23 11:22:42 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_isnbr(int argc, char **argv)
{
	int	i;
	int	len;

	len = 1;
	while (len < argc)
	{
		i = 0;
		while (argv[len][i])
		{
			if (!ft_strchr("0123456789+-", argv[len][i]))
			{
				write (2, "Error\n", 6);
				exit (1);
			}
			i++;
		}
		if (i == 0)
		{
			write (2, "Error\n", 6);
			exit (1);
		}
		len++;
	}
	return (1);
}

int	ft_check_isrepeated(int *arr, int len)
{
	int	i;

	i = 0;
	while (len--)
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] == arr[len])
			{
				write (2, "Error\n", 6);
				exit (1);
			}
			i++;
		}
	}
	return (1);
}
