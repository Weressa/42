/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:30:17 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 18:41:11 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*last_node(t_stack *head)
{
	if (head == NULL)
		return (NULL);
	while (head && head->next)
		head = head->next;
	return (head);
}
