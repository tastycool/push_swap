/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:41:44 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/03 14:06:11 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	parsing(t_data *data, int argc, char **argv)
{
	int	i;
	
	i = 0;
	data->parsing = true;
	while (i < argc)
	{
		if (data->tab_stack[0][argv[0][i + 1]] != VALIDE_SYMBOLE);
			data->parsing == false;
	}
	if (data->parsing == false)
		quit(data);
}