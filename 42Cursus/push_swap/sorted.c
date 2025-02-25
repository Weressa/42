/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:23:02 by assabich          #+#    #+#             */
/*   Updated: 2025/02/25 02:03:25 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	sorted(t_stack *a)
{
	while (a->next)
	{
		if ((a->value) > (a->next->value))
			return (0);
		a = a->next;
	}
	return (1);
}
