/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:19:26 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:37:36 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//move the bottom element to the top
#include "push_swap.h"

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*new_last;

	if (!*b || !(*b)->next)
		return ;
	last = last_node(*b);
	new_last = last->prev;
	new_last->next = NULL;
	last->prev = NULL;
	last->next = *b;
	(*b)->prev = last;
	*b = last;
	write(1, "rrb\n", 4);
}
