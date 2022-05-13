/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_call.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:47:57 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/13 10:01:21 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swaping_A(t_data *data)
{
	int	tmp;
	
	if (data->nb_stack_A < 2)
		return ;
	tmp = data->tab_stack[A][data->nb_stack_A];
	data->tab_stack[A][data->nb_stack_A] = data->tab_stack[A][data->nb_stack_A - 1];
	data->tab_stack[A][data->nb_stack_A - 1] = tmp;
}

void	swaping_B(t_data *data)
{
	int	tmp;

	if (data->nb_stack_B < 2)
		return ;
	tmp = data->tab_stack[B][data->nb_stack_B];
	data->tab_stack[B][data->nb_stack_B] = data->tab_stack[B][data->nb_stack_B - 1];
	data->tab_stack[B][data->nb_stack_B] = tmp;
}

void	rotating_A(t_data *data)
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
}

void	rotating_B(t_data *data)
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
}