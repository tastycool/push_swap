/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_rules3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:15:55 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:27:43 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a_reverse_rotate_b(t_data *data)
{
	rrra(data);
	rrrb(data);
	dprintf(1, "rrr\n");
}

void	rrra(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_a < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[A][i];
	while (i < data->nb_stack_a)
	{
		i++;
		data->tab_stack[A][i - 1] = data->tab_stack[A][i];
	}
	data->tab_stack[A][i] = tmp;
}

void	rrrb(t_data *data)
{
	int	i;
	int	tmp;

	if (data->nb_stack_b < 2)
		return ;
	i = 0;
	tmp = data->tab_stack[B][i];
	while (i < data->nb_stack_b)
	{
		i++;
		data->tab_stack[B][i - 1] = data->tab_stack[B][i];
	}
	data->tab_stack[B][i] = tmp;
}
