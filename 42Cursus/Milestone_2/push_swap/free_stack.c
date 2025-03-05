/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:05:25 by assabich          #+#    #+#             */
/*   Updated: 2025/02/18 12:43:32 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **a)
{
	t_stack	*curr;
	t_stack	*temp;

	if (a == NULL)
		return ;
	curr = *a;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	*a = NULL;
}
