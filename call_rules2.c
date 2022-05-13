/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:15:16 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/13 10:06:43 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data *data)
{
	int	i;
	int tmp;
	
	if (data->nb_stack_A < 2)
		return ;
	i = data->nb_stack_A;
	tmp = data->tab_stack[A][i];
	while (i >= 0)
		{
			i--;
			data->tab_stack[A][i + 1] = data->tab_stack[A][i];
		}
	data->tab_stack[A][0] = tmp;
	dprintf(1, "ra\n");
}

void	rotate_b(t_data *data)
{
	int	i;
	int tmp;
	
	if (data->nb_stack_B < 2)
		return ;
	i = data->nb_stack_B;
	tmp = data->tab_stack[B][i];
	while (i >= 0)
		{
			i--;
			data->tab_stack[B][i + 1] = data->tab_stack[B][i];
		}
	data->tab_stack[B][0] = tmp;
	dprintf(1, "rb\n");
}

void	rotate_a_rotate_b(t_data *data)
{
	rotating_A(data);
	rotating_B(data);
	dprintf(1, "rr\n");
}

void	reverse_rotate_a(t_data *data)
{
	int	i;
	int tmp;
	
	if (data->nb_stack_A < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[A][i];
	while (i < data->nb_stack_A)
		{
			i++;
			data->tab_stack[A][i - 1] = data->tab_stack[A][i];
		}
	data->tab_stack[A][i] = tmp;
	dprintf(1, "rra\n");
}

void	reverse_rotate_b(t_data *data)
{
	int	i;
	int tmp;
	
	if (data->nb_stack_B < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[B][i];
	while (i < data->nb_stack_B)
		{
			i++;
			data->tab_stack[B][i - 1] = data->tab_stack[B][i];
		}
	data->tab_stack[B][i] = tmp;
	dprintf(1, "rrb\n");
}