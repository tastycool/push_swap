/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:56:29 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/24 16:34:26 by tberube-         ###   ########.fr       */
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
	int		nb_stack_a;
	int		nb_stack_b;
	long	*index;
	int		index_min;
	int		incre_int;
	int		next_min;
	int		s_1_2;
	int		mediane;
	int		augment;
	int		i;
	int		j;
	int		x;
	int		max;
	int		check_mediane;
	int		verifier;
}	t_data;

void	quit(t_data *data, char **argv);
void	a_sorted(t_data *data, char **argv);
void	valid_check(t_data *data, char **argv);
void	check_if_sorted(t_data *data, char **argv);
void	check_doublon(t_data *data, char **argv);
int		main(int argc, char **argv);
void	full_stack_a(t_data *data, char **argv);
char	**split_argv(char **argv, t_data *data);
void	call_parsing(t_data *data, char **argv);
void	check_minus(t_data *data, char **argv);
void	check_max_min(t_data *data, char **argv);
void	quit_free(t_data *data, char **argv);
void	ft_free_long_tab_p_s(long **tab);
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
void	swaping_a(t_data *data);
void	swaping_b(t_data *data);
void	rotating_a(t_data *data);
void	rotating_b(t_data *data);
void	rrra(t_data *data);
void	rrrb(t_data *data);
void	find_min(t_data *data);
void	call_algo(t_data *data);
void	find_next(t_data *data);
void	sort_index_stack_a(t_data *data);
void	indexisation(t_data *data);
void	algo_3(t_data *data);
void	algo_3_suite(t_data *data);
void	algo_5(t_data *data);
void	search_1_2(t_data *data);
void	algo_5_suite(t_data *data);
void	suite_2_algo_5(t_data *data);
void	print_stack(long *stack, int size);
void	gros_algo(t_data *data);
void	algo_6_499(t_data *data);
void	algo_6_499_suite(t_data *data);
void	search_bigger(t_data *data);
void	pyramid_build(t_data *data);
void	find_bigger(t_data *data);
void	put_bigger_on_top_rotate(t_data *data);
void	put_bigger_on_top_r_rotate(t_data *data);
void	check_mediane(t_data *data);
void	stacka_tob(t_data *data);
void	ft_free(t_data *data, char **argv);
void	full_index(t_data *data, char **argv);

#endif
