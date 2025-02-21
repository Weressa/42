/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:16:54 by assabich          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:03 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//push the top element from stack_a to stack_b
#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*first;

	if (!(*a) || !a)
		return ;
	first = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	first->next = *b;
	if (*b)
		(*b)->prev = first;
	*b = first;
	write (1, "pb\n", 3);
}
