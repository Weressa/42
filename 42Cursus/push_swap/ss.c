/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:41:25 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:35:02 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//swap the first two elements of both stacks

void	ss(t_stack *a, t_stack *b)
{
	int	temp;

	if (a && a->next)
	{
		temp = a->value;
		a->value = a->next->value;
		a->next->value = temp;
	}
	if (b && b->next)
	{
		temp = b->value;
		b->value = b->next->value;
		b->next->value = temp;
	}
	write(1, "ss\n", 3);
}
