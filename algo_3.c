/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:09:48 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/19 11:39:33 by tberube-         ###   ########.fr       */
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
	&& data->tab_stack[A][av] < data->tab_stack[A][ap + 1])
		swap_a(data);
	if (data->tab_stack[A][av] < data->tab_stack[A][ap] \
	&& data->tab_stack[A][av] > data->tab_stack[A][ap + 1])
		rotate_a(data);
	if (data->tab_stack[A][av] > data->tab_stack[A][ap] \
	&& data->tab_stack[A][ap] > data->tab_stack[A][ap + 1])
	{	
		swap_a(data);
		reverse_rotate_a(data);
	}
	algo_3_suite(data);
}

void	algo_3_suite(t_data *data)
{
	int	av;
	int	ap;

	av = 0;
	ap = 1;
	if (data->tab_stack[A][av] > data->tab_stack[A][ap] \
	&& data->tab_stack[A][ap] < data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][av] > data->tab_stack[A][ap + 1])
		reverse_rotate_a(data);
	if (data->tab_stack[A][av] > data->tab_stack[A][ap] \
	&& data->tab_stack[A][ap] < data->tab_stack[A][ap + 1] \
	&& data->tab_stack[A][av] < data->tab_stack[A][ap + 1])
	{
		swap_a(data);
		rotate_a(data);
	}	
}
