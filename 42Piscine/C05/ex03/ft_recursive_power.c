/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:30:36 by assabich          #+#    #+#             */
/*   Updated: 2024/07/11 13:25:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
		n = nb * (ft_recursive_power(nb, (power - 1)));
	return (n);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(4, 5));
	printf("%d\n", ft_recursive_power(5, -3));
	printf("%d\n", ft_recursive_power(2, 0));
	return (0);
}*/
