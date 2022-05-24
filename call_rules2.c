/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:15:16 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:28:49 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	i = data->nb_stack_a;
	tmp = data->tab_stack[A][i - 1];
	while (i > 0)
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
	int	tmp;

	if (data->nb_stack_b < 2)
		return ;
	i = data->nb_stack_b;
	tmp = data->tab_stack[B][i - 1];
	while (i > 0)
	{
		i--;
		data->tab_stack[B][i + 1] = data->tab_stack[B][i];
	}
	data->tab_stack[B][0] = tmp;
	dprintf(1, "rb\n");
}

void	rotate_a_rotate_b(t_data *data)
{
	rotating_a(data);
	rotating_b(data);
	dprintf(1, "rr\n");
}

void	reverse_rotate_a(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[A][i];
	while (i + 1 < data->nb_stack_a)
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
	int	tmp;

	if (data->nb_stack_b < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[B][i];
	while (i + 1 < data->nb_stack_b)
	{
		i++;
		data->tab_stack[B][i - 1] = data->tab_stack[B][i];
	}
	data->tab_stack[B][i] = tmp;
	dprintf(1, "rrb\n");
}
