/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:23:02 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 11:44:27 by assabich         ###   ########.fr       */
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
/*
int main(void)
{
    t_stack *a;
    t_stack *b;
    t_stack *c;

    // ------------------
    // 1) Sorted list: 1 -> 2 -> 3 -> NULL
    // ------------------
    a = malloc(sizeof(t_stack));
    a->value = 1;
    a->next = malloc(sizeof(t_stack));
    a->next->value = 2;
    a->next->next = malloc(sizeof(t_stack));
    a->next->next->value = 3;
    a->next->next->next = NULL;

    if (sorted(a))
        printf("List a is sorted.\n");
    else
        printf("List a is NOT sorted.\n");

    // Free list a
    free(a->next->next);
    free(a->next);
    free(a);

    // ------------------
    // 2) Not sorted: 5 -> 4 -> 6 -> NULL
    // ------------------
    b = malloc(sizeof(t_stack));
    b->value = 5;
    b->next = malloc(sizeof(t_stack));
    b->next->value = 4;
    b->next->next = malloc(sizeof(t_stack));
    b->next->next->value = 6;
    b->next->next->next = NULL;

    if (sorted(b))
        printf("List b is sorted.\n");
    else
        printf("List b is NOT sorted.\n");

    // Free list b
    free(b->next->next);
    free(b->next);
    free(b);

    // ------------------
    // 3) All identical: 10 -> 10 -> 10 -> NULL
    // ------------------
    c = malloc(sizeof(t_stack));
    c->value = 10;
    c->next = malloc(sizeof(t_stack));
    c->next->value = 10;
    c->next->next = malloc(sizeof(t_stack));
    c->next->next->value = 10;
    c->next->next->next = NULL;

    if (sorted(c))
        printf("List c is sorted.\n");
    else
        printf("List c is NOT sorted.\n");

    // Free list c
    free(c->next->next);
    free(c->next);
    free(c);

    return (0);
}*/
