/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repited.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:42:46 by assabich          #+#    #+#             */
/*   Updated: 2025/02/23 13:10:47 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_repited(t_stack *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}
