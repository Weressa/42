/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:59:05 by assabich          #+#    #+#             */
/*   Updated: 2025/02/25 02:55:58 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_if(t_stack **a, char **av, int bol)
{
	if (bol)
	{
		create_stack(a, av, bol);
		free_av(av);
	}
	else
		create_stack(a, av + 1, bol);
}

void	push_swap(t_stack **a, t_stack **b)
{
	if (!sorted(*a))
	{
		if (stack_size(*a) >= 2 && stack_size(*a) <= 3)
			sort3(a);
		else if (stack_size(*a) >= 4 && stack_size(*a) <= 5)
			sort5(a, b);
		else
			radix(a, b);
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		bol;

	a = NULL;
	b = NULL;
	bol = 0;
	if ((ac == 1) || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2 && ft_strchr(av[1], ' '))
	{
		av = ft_split(av[1], ' ');
		bol = 1;
	}
	if (ac >= 2)
	{
		create_if(&a, av, bol);
		push_swap(&a, &b);
	}
	return (0);
}