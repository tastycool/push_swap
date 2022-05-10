/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_long_tab_P_S.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:33:51 by tberube-          #+#    #+#             */
/*   Updated: 2022/05/10 13:31:47 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_long_tab_P_S(long **tab)
{
	int	y;

	y = 0;
	free(tab[A]);
	free(tab[B]);
	free(tab);
}