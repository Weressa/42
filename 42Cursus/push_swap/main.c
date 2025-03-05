/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:59:05 by assabich          #+#    #+#             */
/*   Updated: 2025/03/04 14:39:54 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack **a, t_stack **b)
{
	if (!sorted(*a))
	{
		if (stack_size(*a) >= 2 && stack_size(*a) <= 3)
			sort3(a);
		else if (stack_size(*a) >= 4 && stack_size(*a) <= 5)
			sort5(a, b);
		else
		{
			bubble_sort(a);
			radix(a, b);
		}
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (-1);
	create_stack(&a, av);
	push_swap(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
/*
t_stack	*temp;
temp = NULL;
temp = a;
while (temp)
{
	printf("%ld", temp->value);
	temp = temp->next;
}
*/
