/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:41:44 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/03 14:58:29 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	parsing(t_data *data, int argc, char **argv)
{
	int	i;
	
	i = 1;
	data->parsing = true;
	while (i < argc)
	{
		if (ft_strncmp(argv[i + 1], VALIDE_SYMBOLE, ft_strlen(argv[i + 1])) != 0)
		{
			data->parsing = false;
			i++;
		}
	}
	if (data->parsing == false)
		quit(data);
	return (0);
}