/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:13:43 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/10 14:23:36 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	
	data.nb_arg = 0;
	argc -= 1;
	++argv;
	if (argc < 1)
		exit(0);
	if (ft_strchr(argv[0], ' '))
		argv = split_argv(argv, &data);
	if (data.nb_arg != 0 && argc >= 2)
		quit();
	data.tab_stack = ft_calloc(2, sizeof(long *));
	data.tab_stack[A] = ft_calloc((argc - 1), sizeof(int));
	data.tab_stack[B] = ft_calloc((argc - 1), sizeof(int));
	call_parsing(&data, argc, argv);
	
}