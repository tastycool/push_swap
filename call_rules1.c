/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:56:23 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/19 12:20:44 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	int	tmp;
	
	if (data->nb_stack_A < 2)
		return ;
	tmp = data->tab_stack[A][data->nb_stack_A];
	data->tab_stack[A][data->nb_stack_A] = data->tab_stack[A][data->nb_stack_A - 1];
	data->tab_stack[A][data->nb_stack_A - 1] = tmp;
	dprintf(1, "sa\n");
}

void	swap_b(t_data *data)
{
	int	tmp;

	if (data->nb_stack_B < 2)
		return ;
	tmp = data->tab_stack[B][data->nb_stack_B];
	data->tab_stack[B][data->nb_stack_B] = data->tab_stack[B][data->nb_stack_B - 1];
	data->tab_stack[B][data->nb_stack_B] = tmp;
	dprintf(1, "sb\n");	
}

void	swap_a_swap_b(t_data *data)
{
	swaping_A(data);
	swaping_B(data);
	dprintf(1, "ss\n");
}

void	push_a(t_data *data)
{
	if (data->nb_stack_B < 1)
		return ;
	data->tab_stack[A][data->nb_stack_A] = data->tab_stack[B][data->nb_stack_B];
	data->nb_stack_A++;
	data->nb_stack_B--;
	dprintf(1, "pa\n");
}

void	push_b(t_data *data)
{
	if (data->nb_stack_A < 1)
		return ;
	data->tab_stack[B][data->nb_stack_B] = data->tab_stack[A][data->nb_stack_A];
	data->nb_stack_A--;
	data->nb_stack_B++;
	dprintf(1, "pb\n");
}