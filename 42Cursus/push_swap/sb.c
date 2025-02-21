/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:40:44 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:34:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//swap the first two elements of stack_b
#include "push_swap.h"

void	sb(t_stack *b)
{
	int	temp;

	if (!b || !b->next)
		return ;
	temp = b->value;
	b->value = b->next->value;
	b->next->value = temp;
	write (1, "sb\n", 3);
}
