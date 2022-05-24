/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gros_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:27:08 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:22:20 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gros_algo(t_data *data)
{
	data->augment = 0;
	data->mediane = (data->nb_arg / 2);
	if (data->nb_arg > 5 && data->nb_arg < 500)
		algo_6_499(data);
	if (data->nb_arg > 499 && data->nb_arg < 1000)
		algo_6_499(data);
	if (data->nb_arg > 999)
		algo_6_499(data);
}

void	algo_6_499(t_data *data)
{
	data->i = data->nb_stack_a;
	if (data->nb_arg > 5 && data->nb_arg < 500)
		data->augment = data->augment + 15;
	if (data->nb_arg > 499 && data->nb_arg < 1000)
		data->augment = data->augment + 33;
	if (data->nb_arg > 999)
		data->augment = (data->augment + (data->nb_arg * 3) / 100);
	while (data->i >= 0)
	{
		algo_6_499_suite(data);
		if (data->check_mediane == data->nb_stack_a)
			break ;
	}
	if (data->nb_stack_a != 0)
		algo_6_499(data);
	pyramid_build(data);
}

void	check_mediane(t_data *data)
{
	data->check_mediane = 0;
	while (data->tab_stack[A][data->check_mediane] \
	> data->mediane + data->augment || \
	data->tab_stack[A][data->check_mediane] < data->mediane - data->augment)
		data->check_mediane++;
}

void	algo_6_499_suite(t_data *data)
{
	check_mediane(data);
	if (data->tab_stack[A][data->nb_stack_a - 1] \
	<= (data->mediane + data->augment) \
	&& data->tab_stack[A][data->nb_stack_a - 1] >= data->mediane)
	{
		push_b(data);
		rotate_b(data);
	}
	if (data->tab_stack[A][data->nb_stack_a - 1] \
	>= (data->mediane - data->augment) \
	&& data->tab_stack[A][data->nb_stack_a - 1] < data->mediane)
	{
		push_b(data);
	}
	if ((data->tab_stack[A][data->nb_stack_a - 1] \
	> data->mediane + data->augment || \
	data->tab_stack[A][data->nb_stack_a - 1] < data->mediane - data->augment))
		rotate_a(data);
	data->i--;
}

void	pyramid_build(t_data *data)
{
	while (data->nb_stack_b > 0)
	{
		data->max = data->nb_stack_b;
		search_bigger(data);
		if (data->tab_stack[A][data->nb_stack_a - 2] < \
		data->tab_stack[A][data->nb_stack_a - 1])
			swap_a(data);
		data->max -= 2;
	}
}
