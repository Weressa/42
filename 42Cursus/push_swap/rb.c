/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:18:03 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:36:15 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//move the top element to the bottom
#include "push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*b) || (*b)->next)
		return ;
	first = *b;
	*b = first->next;
	(*b)->prev = NULL;
	last = last_node(*b);
	last->next = first;
	first->prev = last;
	first->next = NULL;
	write(1, "rb\n", 3);
}
