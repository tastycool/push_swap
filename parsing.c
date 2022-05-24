/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:41:44 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:40:28 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_max_min(t_data *data, char **argv, int argc)
{
	int	i;

	i = 0;
	while (i < data->nb_arg)
	{
		if (data->index[i] > INT_MAX || data->index[i] < INT_MIN)
			quit_free(data, argc, argv);
		i++;
	}
}

void	check_if_sorted(t_data *data, char **argv, int argc)
{
	int	i;

	i = data->nb_arg - 1;
	while (data->index[i] > data->index[i - 1])
	{
		i--;
		if (i == 0)
			a_sorted(data, argv, argc);
	}
}

void	check_doublon(t_data *data, char **argv, int argc)
{
	int		avant;
	int		apres;
	int		i;
	int		j;

	i = 0;
	while (i < data->nb_arg)
	{
		j = i + 1;
		avant = data->index[i];
		while (j < data->nb_arg)
		{
			apres = data->index[j];
			if (avant == apres)
				quit_free(data, argc, argv);
			else
				j++;
		}
		i++;
	}
}
