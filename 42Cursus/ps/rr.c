/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:18:30 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:36:48 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rotate both stacks simultaneously
#include "push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	first = *a;
	*a = first->next;
	(*a)->prev = NULL;
	last = last_node(*a);
	last->next = first;
	first->prev = last;
	first->next = NULL;
	first = *b;
	*b = first->next;
	(*b)->prev = NULL;
	last = last_node(*b);
	last->next = first;
	first->prev = last;
	first->next = NULL;
	write(1, "rr\n", 3);
}
