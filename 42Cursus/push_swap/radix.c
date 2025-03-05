/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:03:10 by assabich          #+#    #+#             */
/*   Updated: 2025/03/01 15:21:52 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	int		bit;
	int		i;
	int		pushed;
	int		size;

	bit = 0;
	size = stack_size(*a);
	while (bit < bit_max(*a) && !sorted(*a))
	{
		pushed = 0;
		i = 0;
		while (i++ < size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
			{
				pb(a, b);
				pushed++;
			}
			else
				ra(a);
		}
		while (pushed--)
			pa(a, b);
		bit++;
	}
}
