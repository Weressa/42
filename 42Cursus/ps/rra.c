/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:19:02 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 18:37:26 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//move the bottom element to the top
#include "push_swap.h"
/*
void rra(t_stack **a)
{
    t_stack *last;
    t_stack *new_last;

    if (!*a || !(*a)->next) // If stack is empty or has 1 element, do nothing
        return;

    last = last_node(*a);
    new_last = last->prev;

    if (new_last) // If there's more than one element
        new_last->next = NULL;

    last->prev = NULL;
    last->next = *a;
    (*a)->prev = last;
    *a = last;

    write(1, "rra\n", 4);
}
*/
#include "push_swap.h"

void rra(t_stack **a)
{
    t_stack *last;
    t_stack *new_last;

    if (!*a || !(*a)->next)
        return; // Nothing to rotate

    last = last_node(*a); // Find the last element
    new_last = last->prev; // New last is the previous of last
    new_last->next = NULL; // Remove link to last
    last->prev = NULL; // Last will become new head
    last->next = *a; // Last points to the old head
    (*a)->prev = last; // Old head points back to last
    *a = last; // Update head of the stack

    write(1, "rra\n", 4); // Print operation
}

