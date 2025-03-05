/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:19:02 by assabich          #+#    #+#             */
/*   Updated: 2025/02/23 10:14:29 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//move the bottom element to the top
#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*new_last;

	if (!*a || !(*a)->next)
		return ;
	last = last_node(*a);
	new_last = last->prev;
	new_last->next = NULL;
	last->prev = NULL;
	last->next = *a;
	(*a)->prev = last;
	*a = last;
	write(1, "rra\n", 4);
}
