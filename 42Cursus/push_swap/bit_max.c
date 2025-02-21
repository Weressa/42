/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:04:23 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 15:29:13 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_max(t_stack *a)
{
	int	n;
	int	max;

	n = 0;
	if (!a)
		return (0);
	max = a->value;
	while (a)
	{
		if (max < a->value)
			max = a->value;
		a = a->next;
	}
	while (max)
	{
		n++;
		max >>= 1;
	}
	return (n);
}
