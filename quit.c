/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:58:10 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/17 09:30:23 by tberube-         ###   ########.fr       */
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
	printf("sorted mais a enlever\n");
	ft_free_long_tab(data->tab_stack);
	exit(0);
}

void	quit_free(t_data *data)
{
	dprintf(2, "Error\n");
	ft_free_long_tab(data->tab_stack);
	if (data->index != NULL)
		free(data->index);
	exit(0);
}

