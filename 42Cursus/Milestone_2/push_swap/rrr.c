/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:19:52 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:37:06 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//reverse rotate both stacks simultaneously
#include "push_swap.h"

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*last;
	t_stack	*new_last;

	last = last_node(*a);
	new_last = prev->last;
	new_last->next = NULL;
	last->prev = NULL;
	last->next = *a;
	(*a)->prev = last;
	*a = last;
	last = last_node(b);
	new_last = prev->last;
	new_last->next = NULL;
	last->prev = NULL;
	last->next = *a;
	(*a)->next = last;
	*a = last;
	write(1, "rrr\n", 4);
}
