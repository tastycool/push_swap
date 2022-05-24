/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:56:23 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:29:39 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	tmp = data->tab_stack[A][data->nb_stack_a - 2];
	data->tab_stack[A][data->nb_stack_a - 2] \
	= data->tab_stack[A][data->nb_stack_a - 1];
	data->tab_stack[A][data->nb_stack_a - 1] = tmp;
	dprintf(1, "sa\n");
}

void	swap_b(t_data *data)
{
	int	tmp;

	if (data->nb_stack_b < 2)
		return ;
	tmp = data->tab_stack[B][data->nb_stack_b - 2];
	data->tab_stack[B][data->nb_stack_b - 2] \
	= data->tab_stack[B][data->nb_stack_b - 1];
	data->tab_stack[B][data->nb_stack_b - 1] = tmp;
	dprintf(1, "sb\n");
}

void	swap_a_swap_b(t_data *data)
{
	swaping_a(data);
	swaping_b(data);
	dprintf(1, "ss\n");
}

void	push_a(t_data *data)
{
	if (data->nb_stack_b < 1)
		return ;
	data->tab_stack[A][data->nb_stack_a] \
	= data->tab_stack[B][data->nb_stack_b - 1];
	data->nb_stack_a++;
	data->nb_stack_b--;
	dprintf(1, "pa\n");
}

void	push_b(t_data *data)
{
	if (data->nb_stack_a < 1)
		return ;
	data->tab_stack[B][data->nb_stack_b] \
	= data->tab_stack[A][data->nb_stack_a - 1];
	data->nb_stack_a--;
	data->nb_stack_b++;
	dprintf(1, "pb\n");
}
