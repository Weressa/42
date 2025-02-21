/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:42:34 by assabich          #+#    #+#             */
/*   Updated: 2025/02/21 18:46:47 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_stack **a, char **av, bool flag)
{
	long	nbr;

	while (*av)
	{
		if (error_syntax(*av))
			free_error(a, av, flag);
		nbr = ft_atol(*av);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_error(a, av, flag);
		if (ft_repited(*a, nbr))
			free_error(a, av, flag);
		append_node(a, nbr);
		av++;
	}
	if (flag)
		free_av(av);
}
