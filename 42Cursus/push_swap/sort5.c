/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:19:44 by assabich          #+#    #+#             */
/*   Updated: 2025/02/23 10:28:36 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(int i, t_stack **a)
{
	while (i > 0)
	{
		ra(a);
		i--;
	}
}

void	do_rra(int i, t_stack **a)
{
	while (i > 0)
	{
		rra(a);
		i--;
	}
}

int	min_index(t_stack *a)
{
	t_stack	*temp;
	int		min;
	int		min_pos;
	int		i;

	if (!a)
		return (-1);
	temp = a;
	min = temp->value;
	min_pos = 0;
	i = 0;
	while (temp)
	{
		if (temp->value < min)
		{
			min = temp->value;
			min_pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (min_pos);
}

void	sort5(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	n;

	n = 2;
	while (n > 0)
	{
		size = stack_size(*a);
		i = min_index(*a);
		if (i <= size / 2)
			do_ra(i, a);
		else
		{
			i = size - i;
			do_rra(i, a);
		}
		pb(a, b);
		n--;
	}
	sort3(a);
	pa(a, b);
	pa(a, b);
}
