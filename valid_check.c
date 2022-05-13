/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:06:23 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/12 19:59:23 by tberube-         ###   ########.fr       */
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
				quit_free(data);
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
				quit_free(data);
			j++;
		}
		i++;
	}
}
	
void	call_parsing(t_data *data, char **argv)
{
	valid_check(data, argv);
	check_minus(data, argv);
	full_stack_a(data, argv);
	check_doublon(data);
	check_if_sorted(data);
	check_max_min(data);
	test(data);
}