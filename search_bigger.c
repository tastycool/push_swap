/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_bigger.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 09:35:21 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:16:03 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_bigger(t_data *data)
{
	int	i;
	int	j;

	i = data->nb_stack_b - 1;
	j = data->nb_stack_b;
	while (i >= 0)
	{
		find_bigger(data);
		push_a(data);
		i--;
		if (data->nb_stack_b == (j - 2))
			break ;
	}
}

void	find_bigger(t_data *data)
{
	int	i;
	int	j;

	data->x = 0;
	j = (data->nb_stack_b / 2);
	i = 0;
	while (i <= data->nb_stack_b - 1)
	{
		while (data->tab_stack[B][i] < data->max - 1)
		{
			data->x++;
			i++;
		}
		if (data->x >= j)
		{
			data->x = (data->nb_stack_b - (data->x + 1));
			put_bigger_on_top_rotate(data);
			break ;
		}
		else
		{
			put_bigger_on_top_r_rotate(data);
			break ;
		}
	}
}

void	put_bigger_on_top_rotate(t_data *data)
{
	while (data->x > 0)
	{
		rotate_b(data);
		data->x--;
	}
}

void	put_bigger_on_top_r_rotate(t_data *data)
{
	while (data->x >= 0)
	{
		reverse_rotate_b(data);
		data->x--;
	}
}
