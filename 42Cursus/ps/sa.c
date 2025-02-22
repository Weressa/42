/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:40:26 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 18:41:52 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//swap the first two elements of stack_a

void	sa(t_stack *a)
{
	int	temp;

	if (!a || !a->next)
		return ;
	temp = a->value;
	a->value = a->next->value;
	a->next->value = temp;
	write(1, "sa\n", 3);
}
