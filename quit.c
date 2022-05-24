/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:58:10 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 14:04:30 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit()
{
	dprintf(2, "Error\n");
	exit(0);
}

void	a_sorted(t_data *data)
{
	ft_free_long_tab(data->tab_stack);
	exit(0);
}

void	quit_free(t_data *data)
{
	dprintf(2, "Error\n");
	ft_free_long_tab(data->tab_stack);
	exit(0);
}

void	ft_free(t_data *data)
{
	ft_free_long_tab(data->tab_stack);
	if (data->index)
		free(data->index);
}
