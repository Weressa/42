/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:03:10 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 14:44:28 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	int	bit;
	int	i;
	int	size;

	bit = 0;
	i = 0;
	if (!a || !(*a) || stack_size(*a) <= 1)
		return ;
	size = stack_size(*a);
	while (bit < bit_max(*a) && !sorted(*a))
	{
		i = 0;
		size = stack_size(*a);
		while (i < size)
		{
			if ((((*a)->value >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			i++;
		}
		while (*b)
			pa(a, b);
		bit++;
	}
}
