/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:59:05 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 16:52:15 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*temp;

	a = NULL;
	b = NULL;
	if ((ac == 1) || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	create_stack(&a, av + 1, ac == 2);
	temp = a;
	while (temp)
	{
		printf("%i  ", temp->index);
		temp = temp->next;
	}
	printf("\n");
	if (stack_size(a) == 3)
		sort3(&a);
	else if (stack_size(a) == 5)
		sort5(&a, &b);
	else
		radix(&a, &b);
	temp = a;
	while (temp)
	{
		printf("%ld  ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	free_stack(&a);
	return (0);
}
