/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:09:48 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/19 16:03:24 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3(t_data *data)
{
	int	av;
	int	ap;

	av = 0;
	ap = 1;
	if (data->tab_stack[A][av] < data->tab_stack[A][ap] \
	&& data->tab_stack[A][av] < data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][ap] > data->tab_stack[A][ap + 1])			// 1 - 3 - 2
		reverse_rotate_a(data);
	if (data->tab_stack[A][av] < data->tab_stack[A][ap] \
	&& data->tab_stack[A][av] > data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][ap] > data->tab_stack[A][ap + 1])			// 2 - 3 - 1
	{
		reverse_rotate_a(data);
		swap_a(data);	
	}
	if (data->tab_stack[A][av] > data->tab_stack[A][ap] \
	&& data->tab_stack[A][av] > data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][ap] < data->tab_stack[A][ap + 1])			// 3 - 1 - 2
		swap_a(data);
	algo_3_suite(data);
}

void	algo_3_suite(t_data *data)
{
	int	av;
	int	ap;

	av = 0;
	ap = 1;
	if (data->tab_stack[A][av] < data->tab_stack[A][ap] \
	&& data->tab_stack[A][ap] < data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][av] < data->tab_stack[A][ap + 1])			// 1 - 2 - 3
	{
		swap_a(data);
		reverse_rotate_a(data);
	}
	if (data->tab_stack[A][av] > data->tab_stack[A][ap] \
	&& data->tab_stack[A][ap] < data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][av] < data->tab_stack[A][ap + 1])			// 2 - 1 - 3
		rotate_a(data);
}
