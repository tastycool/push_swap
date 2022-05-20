/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gros_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:27:08 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/20 17:21:29 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gros_algo(t_data *data)
{
	data->mediane = (data->nb_arg / 2);
	if (data->nb_arg > 5 && data->nb_arg < 500)
		algo_6_499(data);
	// if (data->nb_arg > 499 && data->nb_arg < 1000)
	// 	algo_500_999(data);
	// if (data->nb_arg > 999)
	// 	algo_1000_plus(data);
}

void	algo_6_499(t_data *data)
{
	data->i = data->nb_stack_A;
	data->augment = 15;
	while (data->i > 0)
	{
		algo_6_499_suite(data);
	}
}

void	algo_6_499_suite(t_data *data)
{
	data->j = 0;
	data->i = data->nb_stack_A;
	if (data->tab_stack[A][data->j] <= (data->mediane + data->augment) \
	&& data->tab_stack[A][data->j] >= data->mediane)
	{
		push_b(data);
		data->i--;
		data->j++;	
	}
	if (data->tab_stack[A][data->j] >= (data->mediane - data->augment) \
	&& data->tab_stack[A][data->j] < data->mediane)
	{
		push_b(data);
		rotate_b(data);
		data->i--;
		data->j++;
	}
	if (data->tab_stack[A][data->j] < (data->mediane - data->augment) \
	|| data->tab_stack[A][data->j] > data->mediane + data->augment)
	{
		data->i--;
		data->j++;
	}		
}