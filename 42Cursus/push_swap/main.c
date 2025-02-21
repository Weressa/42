/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:59:05 by assabich          #+#    #+#             */
/*   Updated: 2025/02/21 19:06:33 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if ((ac == 1) || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	create_stack(&a, av + 1, ac == 2);
	if (stack_size(a) > 1)
		radix(&a, &b);
	while (a)
	{
		printf("%ld  ", a->value);
		a = a->next;
	}
	free_stack(&a);
	return (0);
}
