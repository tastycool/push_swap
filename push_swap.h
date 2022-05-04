/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:56:29 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/03 17:05:21 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include "libft/libft.h"

# define VALIDE_SYMBOLE "0123456789"

typedef struct s_data
{
	int		lenght_array;
	char	array;
	char	**tab_stack;
	bool	parsing;
	
}	t_data;

void	quit(t_data *data);
bool	parsing(t_data *data, int argc, char **argv);
int		main(int argc, char **argv);

#endif
