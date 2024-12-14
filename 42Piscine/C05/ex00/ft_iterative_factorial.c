/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:43:45 by assabich          #+#    #+#             */
/*   Updated: 2024/07/09 11:45:01 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{	
		while (i <= nb)
		{
		n *= i;
		i++;
		}
	}
	return (n);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(-3));
}*/
