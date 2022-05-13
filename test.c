/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:07:49 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/13 10:11:39 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack_a(t_data *data)
{
	int i = data->nb_stack_A;
	while (i >= 0)
	{
		printf("stack_A[%d]: %li\n", i, data->tab_stack[A][i]);
		i--;
	}
}

void	print_stack_b(t_data *data)
{
	int i = 0;
	while (i < data->nb_stack_B)
	{
		printf("stack_B[%d]: %li\n", i, data->tab_stack[B][i]);
		i++;
	}	
}

void	test(t_data *data)
{
	reverse_rotate_a_reverse_rotate_b(data);
	print_stack_a(data);
}