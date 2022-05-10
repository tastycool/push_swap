/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:56:23 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/10 14:31:46 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	int	tmp;
	
	tmp = data->tab_stack[A][0];
	data->tab_stack[A][0] = data->tab_stack[A][1];
	data->tab_stack[A][1] = tmp;
	dprintf(1, "sa\n");
}

void	swap_b(t_data *data)
{
	int	tmp;

	tmp = data->tab_stack[B][0];
	data->tab_stack[B][0] = data->tab_stack[B][1];
	data->tab_stack[B][1] = tmp;
	dprintf(1, "sb\n");	
}

void	swap_a_swap_b(t_data *data)
{
	int	tmp;
	
	tmp = data->tab_stack[A][0];
	data->tab_stack[A][0] = data->tab_stack[A][1];
	data->tab_stack[A][1] = tmp;
	tmp = data->tab_stack[B][0];
	data->tab_stack[B][0] = data->tab_stack[B][1];
	data->tab_stack[B][1] = tmp;
	dprintf(1, "ss\n");
}

void	push_a(t_data *data)
{
	dprintf(1, "pa\n");
}

void	push_b(t_data *data)
{
	dprintf(1, "pb\n");
}