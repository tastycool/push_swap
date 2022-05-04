/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:13:43 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/03 14:14:17 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	
	data.tab_stack = (char **)ft_calloc((argc - 1 * 2), sizeof (char *));
	parsing(&data, argc, argv);
	//full_the_stack(data, argc, argv);
}