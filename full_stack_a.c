/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:42:09 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 13:42:28 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	full_stack_a(t_data *data, char **argv)
{
	int i;
	int	j;

	j = 0;
	i = data->nb_arg - 1;
	data->nb_stack_A = data->nb_arg;
	data->nb_stack_B = 0;
	while (i >= 0)
	{
		data->tab_stack[A][i] = ft_atolong(argv[j]);
		i--;
		j++;
	}
}

void	stackA_toB(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->nb_stack_A)
	{
		data->tab_stack[A][i] = data->tab_stack[B][i];
		i++;
	}
}
