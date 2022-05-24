/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:36:31 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 15:00:13 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_argv(char **argv, t_data *data)
{
	data->nb_arg = 0;
	argv = ft_split(argv[0], ' ');
	while (argv[data->nb_arg] != NULL)
		data->nb_arg++;
	if (argv[0] == NULL)
		exit(0);
	return (argv);
}
