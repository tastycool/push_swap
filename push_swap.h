/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:56:29 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/12 19:59:32 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include "libft_push_swap/libft.h"
# include "limits.h"

# define VALIDE_SYMBOLE "-0123456789"

enum e_stack {
	A,
	B,
};

typedef struct s_data
{
	int		lenght_array;
	char	array;
	long	**tab_stack;
	bool	parsing;
	char	**arg;
	int		nb_arg;
	bool	sorted;
	int		nb_stack_A;
	int		nb_stack_B;
}	t_data;

void	quit();
void	a_sorted(t_data *data);
void	valid_check(t_data *data, char **argv);
void	check_if_sorted(t_data *data);
void	check_doublon(t_data *data);
int		main(int argc, char **argv);
void	full_stack_a(t_data *data, char **argv);
char	**split_argv(char **argv, t_data *data);
void	call_parsing(t_data *data, char **argv);
void	check_minus(t_data *data, char **argv);
void	check_max_min(t_data *data);
void	quit_free(t_data *data);
void	ft_free_long_tab_P_S(long **tab);
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_a_swap_b(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate_a(t_data *data);
void	rotate_b(t_data *data);
void	rotate_a_rotate_b(t_data *data);
void	reverse_rotate_a(t_data *data);
void	reverse_rotate_b(t_data *data);
void	reverse_rotate_a_reverse_rotate_b(t_data *data);
void	test(t_data *data);

#endif
