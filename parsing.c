/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:41:44 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/16 10:39:26 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_min(t_data *data)
{
	int	i;
	
	i = 0;
	while (i < data->nb_arg)
	{
		if (data->tab_stack[A][i] > INT_MAX || data->tab_stack[A][i] < INT_MIN)
			quit_free(data);
		i++;
	}
}

void	check_if_sorted(t_data *data)
{
	int	i;

	i = data->nb_arg - 1;
	while (data->tab_stack[A][i] > data->tab_stack[A][i - 1])
	{
		i--;
		if (i == 0)			
			a_sorted(data);
	}
}

void	check_doublon(t_data *data)
{
	int		avant;
	int		apres;
	int		i;
	int		j;
	
	i = 0;
	while (i < data->nb_arg)
	{
		j = i + 1;
		avant = data->tab_stack[A][i];
		while (j < data->nb_arg)
		{
			apres = data->tab_stack[A][j];
			if (avant == apres)
				quit_free(data);
			else
				j++;;	
		}
		i++;
	}
}
