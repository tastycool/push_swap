/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_call.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:47:57 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:26:58 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swaping_a(t_data *data)
{
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	tmp = data->tab_stack[A][data->nb_stack_a];
	data->tab_stack[A][data->nb_stack_a] \
	= data->tab_stack[A][data->nb_stack_a - 1];
	data->tab_stack[A][data->nb_stack_a - 1] = tmp;
}

void	swaping_b(t_data *data)
{
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	tmp = data->tab_stack[B][data->nb_stack_a];
	data->tab_stack[B][data->nb_stack_a] \
	= data->tab_stack[B][data->nb_stack_a - 1];
	data->tab_stack[B][data->nb_stack_a] = tmp;
}

void	rotating_a(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	i = data->nb_stack_a;
	tmp = data->tab_stack[A][i];
	while (i >= 0)
	{
		i--;
		data->tab_stack[A][i + 1] = data->tab_stack[A][i];
	}
	data->tab_stack[A][0] = tmp;
}

void	rotating_b(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	i = data->nb_stack_a;
	tmp = data->tab_stack[B][i];
	while (i >= 0)
	{
		i--;
		data->tab_stack[B][i + 1] = data->tab_stack[B][i];
	}
	data->tab_stack[B][0] = tmp;
}
