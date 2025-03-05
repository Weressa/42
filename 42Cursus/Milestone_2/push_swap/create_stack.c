/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:42:34 by assabich          #+#    #+#             */
/*   Updated: 2025/03/04 14:43:06 by assabich         ###   ########.fr       */
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

void	ft_errortab(char **tab)
{
	free_str(tab);
	exit(1);
}

void	create_stack(t_stack **a, char **av)
{
	char	**tab;
	long	nbr;
	int		x;
	int		i;

	x = -1;
	i = 0;
	while (av[++i])
	{
		tab = ft_split(av[i], ' ');
		if (!tab)
			ft_errortab(tab);
		while (tab[++x])
		{
			if (error_syntax(tab[x]))
				free_error(a, tab);
			nbr = ft_atol(tab[x]);
			if (nbr > INT_MAX || nbr < INT_MIN || ft_repited(*a, nbr))
				free_error(a, tab);
			append_node(a, nbr);
		}
		x = -1;
		free_str(tab);
	}
	create_index(a);
}
