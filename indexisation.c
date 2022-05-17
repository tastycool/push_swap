/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexisation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:44:40 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/17 16:27:50 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index_stack_A(t_data *data)
{
	int	i;

	i = 0;
	while (data->tab_stack[A][i] != data->index[data->incre_int])
		i++;
	data->tab_stack[A][i] = data->incre_int;
}

void	find_next(t_data *data)
{
	int	i;

	i = 0;
	while (data->next_min >= data->tab_stack[A][i])
		i++;
	data->next_min = data->tab_stack[A][i];
	while (i < data->nb_arg)
	{
		if (data->tab_stack[A][i] < data->next_min && data->tab_stack[A][i] > data->index_min)
			data->next_min = data->tab_stack[A][i];
		i++;
	}
	data->index_min = data->next_min;
}

void	find_min(t_data *data) 
{
	int i;

	i = 0;
	while (i < data->nb_arg)
	{
		if (data->tab_stack[A][i] < data->index_min)
			data->index_min = data->tab_stack[A][i];
		i++;
	}
	data->next_min = data->index_min;
}