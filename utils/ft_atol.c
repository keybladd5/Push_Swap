/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:18:52 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/24 20:21:23 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//pasar ARG del string a integers
int	ft_atol(const char *str)
{
	long	output;
	long	sign;

	output = 0;
	sign = 1;
	while (*str && (ft_strchr("\n\t\v\f\r ", *str)) != NULL)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str && (ft_strchr("0123456789", *str)) != NULL)
	{
		output = (output * 10) + (*str - '0');
		str++;
	}
	return (output * sign);
}

