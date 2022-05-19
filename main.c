/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:13:43 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/19 16:56:31 by tberube-         ###   ########.fr       */
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
	if (data.nb_arg == 0)
		data.nb_arg = argc;
	data.tab_stack = ft_calloc(2, sizeof(long *));
	data.tab_stack[A] = ft_calloc((data.nb_arg), sizeof(long));
	data.tab_stack[B] = ft_calloc((data.nb_arg), sizeof(long));
	call_parsing(&data, argv);
	
}

// 4 - 2 - 5 - 1 - 3
// 4 - 2 - 3 - 5 - 1
// 4 - 2 - 5 - 3 - 1
// 3 - 2 - 5 - 1 - 4