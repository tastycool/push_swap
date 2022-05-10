/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:41:44 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/10 15:30:21 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_min(t_data *data, int argc)
{
	int	i;
	
	i = 0;
	while (i < argc)
	{
		if (data->tab_stack[A][i] > INT_MAX || data->tab_stack[A][i] < INT_MIN)
			quit_free(data);
		i++;
	}
}

void	check_if_sorted(t_data *data, int argc)
{
	int	i;

	i = 0;
	while (data->tab_stack[A][i] > data->tab_stack[A][i + 1])
	{
		i++;
		if (i < argc)			
			a_sorted();
	}
}

void	check_doublon(t_data *data, int argc)
{
	int		avant;
	int		apres;
	int		i;
	int		j;
	
	i = 0;
	while (i < argc)
	{
		j = i + 1;
		avant = data->tab_stack[A][i];
		while (j < argc)
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
