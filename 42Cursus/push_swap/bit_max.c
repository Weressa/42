/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:04:23 by assabich          #+#    #+#             */
/*   Updated: 2025/03/01 13:57:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_max(t_stack *a)
{
	int	bits;
	int	max;

	bits = 0;
	if (!a)
		return (0);
	max = stack_size(a) - 1;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
