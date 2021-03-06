/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:39:07 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:30:28 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_5(t_data *data)
{
	search_1_2(data);
	if (data->s_1_2 == 4)
		push_b(data);
	if (data->s_1_2 == 0)
	{
		reverse_rotate_a(data);
		push_b(data);
	}
	if (data->s_1_2 == 1)
	{
		reverse_rotate_a(data);
		reverse_rotate_a(data);
		push_b(data);
	}
	if (data->s_1_2 == 2)
	{
		rotate_a(data);
		rotate_a(data);
		push_b(data);
	}
	algo_5_suite(data);
}

void	algo_5_suite(t_data *data)
{
	if (data->s_1_2 == 3)
	{
		rotate_a(data);
		push_b(data);
	}
	search_1_2(data);
	if (data->s_1_2 == 3)
		push_b(data);
	if (data->s_1_2 == 2)
	{
		rotate_a(data);
		push_b(data);
	}
	if (data->s_1_2 == 1)
	{
		rotate_a(data);
		rotate_a(data);
		push_b(data);
	}
	if (data->s_1_2 == 0)
	{
		reverse_rotate_a(data);
		push_b(data);
	}
	suite_2_algo_5(data);
}

void	suite_2_algo_5(t_data *data)
{
	if (data->tab_stack[B][0] > data->tab_stack[B][1])
		swap_b(data);
	algo_3(data);
	push_a(data);
	push_a(data);
}

void	search_1_2(t_data *data)
{
	data->s_1_2 = 0;
	while (data->nb_stack_a > 0)
	{
		if (data->tab_stack[A][data->s_1_2] == 1 \
		|| data->tab_stack[A][data->s_1_2] == 2)
			break ;
		data->s_1_2++;
	}
}
