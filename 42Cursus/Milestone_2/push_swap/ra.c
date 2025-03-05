/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:17:32 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 18:40:40 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//move the top element to the bottom
#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last = last_node(*a);
	if (!last)
		return ;
	first->next = NULL;
	first->prev = last;
	last->next = first;
	write(1, "ra\n", 3);
}
