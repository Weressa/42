/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:16:17 by assabich          #+#    #+#             */
/*   Updated: 2025/02/20 19:16:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//push the top element from stack_b to stack_a
#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*first;

	if (!(*b) || !b)
		return ;
	first = *b;
	*b = (*b)->next;
	if (*b)
		(*b)->prev = NULL;
	first->next = *a;
	if (*a)
		(*a)->prev = first;
	*a = first;
	write(1, "pa\n", 3);
}
