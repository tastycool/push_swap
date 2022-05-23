/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gros_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:27:08 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/21 22:40:15 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	gros_algo(t_data *data)
{
	data->augment = 0;
	data->mediane = (data->nb_arg / 2);
	//print_stack(data->tab_stack[A], 10);
	if (data->nb_arg > 5 && data->nb_arg < 500)
		algo_6_499(data);
	if (data->nb_arg > 499 && data->nb_arg < 1000)
		algo_6_499(data);
	if (data->nb_arg > 999)
		algo_6_499(data);	
}

void	algo_6_499(t_data *data)
{
	data->i = data->nb_stack_A;
	//print_stack(data->tab_stack[A], 10);
	//print_stack(data->tab_stack[B], 10);
	if (data->nb_arg > 5 && data->nb_arg < 500)
		data->augment = data->augment + 15;
	if (data->nb_arg > 499 && data->nb_arg < 1000)
		data->augment = data->augment + 33;
	if (data->nb_arg > 999)
		data->augment = (data->augment + (data->nb_arg * 3) / 100);
	
	while (data->i > 0)
	{
		algo_6_499_suite(data);
	}
	if (data->nb_stack_A != 0)
		algo_6_499(data);
	pyramid_build(data);
}

void	algo_6_499_suite(t_data *data)
{
	if (data->tab_stack[A][data->nb_stack_A - 1] <= (data->mediane + data->augment) \
	&& data->tab_stack[A][data->nb_stack_A - 1] >= data->mediane)
	{
		push_b(data);
		rotate_b(data);	
	}
	if (data->tab_stack[A][data->nb_stack_A - 1] >= (data->mediane - data->augment) \
	&& data->tab_stack[A][data->nb_stack_A - 1] < data->mediane)
	{
		push_b(data);
	}
	rotate_a(data);
	data->i--;
	//print_stack(data->tab_stack[A], 10);
	//print_stack(data->tab_stack[B], 10);
}

void	pyramid_build(t_data *data)
{
	while (data->nb_stack_B > 0)
	{
		data->max = data->nb_stack_B;
		// print_stack(data->tab_stack[A], 10);
		// print_stack(data->tab_stack[B], 10);
		search_bigger(data);
		if (data->tab_stack[A][data->nb_stack_A - 2] < \
		data->tab_stack[A][data->nb_stack_A - 1])
			swap_a(data);
		data->max -= 2;
	}
}
