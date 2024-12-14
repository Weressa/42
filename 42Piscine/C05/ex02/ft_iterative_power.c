/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:10:30 by assabich          #+#    #+#             */
/*   Updated: 2024/07/10 11:28:41 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			n *= nb;
			i++;
		}
	}
	return (n);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(4, 5));
	printf("%d\n", ft_iterative_power(5, -3));
	printf("%d\n", ft_iterative_power(2, 0));

	return (0);
}*/
