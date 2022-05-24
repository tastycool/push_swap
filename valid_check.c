/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:23 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 16:16:09 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	check_minus(t_data *data, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->nb_arg)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j] != '\0')
		{	
			if (!ft_strchr("0123456789", argv[i][j]))
				quit_free(data, argv);
			j++;
		}
		i++;
	}
}

void	valid_check(t_data *data, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->nb_arg)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_strchr(VALIDE_SYMBOLE, argv[i][j]))
				quit_free(data, argv);
			j++;
		}
		i++;
	}
}

void	call_parsing(t_data *data, char **argv)
{
	valid_check(data, argv);
	check_minus(data, argv);
	full_index(data, argv);
	full_stack_a(data, argv);
	check_doublon(data, argv);
	check_max_min(data, argv);
	check_if_sorted(data, argv);
	indexisation(data);
}

void	indexisation(t_data *data)
{
	data->incre_int = 0;
	data->index_min = data->tab_stack[A][0];
	find_min(data);
	data->index[data->incre_int] = data->index_min;
	data->incre_int++;
	while (data->incre_int < data->nb_arg)
	{
		find_next(data);
		data->index[data->incre_int] = data->next_min;
		data->incre_int++;
	}
	data->incre_int = 0;
	while (data->incre_int < data->nb_arg)
	{
		sort_index_stack_a(data);
		data->incre_int++;
	}
	stacka_tob(data);
	call_algo(data);
}

void	call_algo(t_data *data)
{
	if (data->nb_arg == 3)
		algo_3(data);
	if (data->nb_arg <= 5 && data->nb_arg > 3)
		algo_5(data);
	if (data->nb_arg > 5)
		gros_algo(data);
}
