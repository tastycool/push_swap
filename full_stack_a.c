/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:42:09 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/10 15:15:06 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	full_stack_a(t_data *data, char **argv, int argc)
{
	int i;

	i = argc;
	while (argc >= 0)
	{
		data->tab_stack[A][i] = ft_atolong(argv[i]);
		i--;
	}
}