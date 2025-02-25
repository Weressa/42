/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:49 by assabich          #+#    #+#             */
/*   Updated: 2025/02/23 13:10:19 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int nbr)
{
	t_stack	*node;

	node = malloc (sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->value = nbr;
	return (node);
}

void	append_node(t_stack **a, int nbr)
{
	t_stack	*node;
	t_stack	*last;

	if (a == NULL)
		return ;
	node = create_node(nbr);
	if (*a == NULL)
	{
		*a = node;
		node->prev = NULL;
	}
	else
	{
		last = last_node(*a);
		if (last == NULL)
		{
			free(node);
			return ;
		}
		last->next = node;
		node->prev = last;
	}
}
