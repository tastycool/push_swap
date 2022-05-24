/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:58:10 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:04:31 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit(char **argv, int argc)
{
	int	i;

	i = -1;
	dprintf(2, "Error\n");
	if (argc < 3)
	{
		while (argv[++i])
			free(argv[i]);
		free(argv);
	}
	exit(1);
}

void	a_sorted(t_data *data, char **argv, int argc)
{
	int	i;

	i = -1;
	ft_free_long_tab(data->tab_stack);
	if (argc < 3)
	{
		while (argv[++i])
			free(argv[i]);
		free(argv);
	}
	if (data->index)
		free(data->index);
	exit(1);
}

void	quit_free(t_data *data, int argc, char **argv)
{
	int	i;

	i = -1;
	dprintf(2, "Error\n");
	ft_free_long_tab(data->tab_stack);
	if (argc < 3)
	{
		while (argv[++i])
			free(argv[i]);
		free(argv);
	}
	if (data->index)
		free(data->index);
	exit(1);
}

void	ft_free(t_data *data, char **argv, int argc)
{
	int	i;

	i = -1;
	ft_free_long_tab(data->tab_stack);
	if (argc < 3)
	{
		while (argv[++i])
			free(argv[i]);
		free(argv);
	}
	if (data->index)
		free(data->index);
}
