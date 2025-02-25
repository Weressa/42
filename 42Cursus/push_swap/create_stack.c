/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:42:34 by assabich          #+#    #+#             */
/*   Updated: 2025/02/25 02:34:36 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

void	create_index(t_stack **a)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *a;
	while (temp)
	{
		temp->index = i++;
		temp = temp->next;
	}
}

void	create_stack(t_stack **a, char **av, bool flag)
{
	long	nbr;
	bool	f;

	f = flag;
	while (*av)
	{
		if (error_syntax(*av))
			free_error(a, av, flag);
		nbr = ft_atol(*av);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_error(a, av, f);
		if (ft_repited(*a, (int)nbr))
			free_error(a, av, f);
		append_node(a, (int)nbr);
		av++;
	}
	create_index(a);
}
