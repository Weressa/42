/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:47:26 by assabich          #+#    #+#             */
/*   Updated: 2024/07/01 14:50:56 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int x)
{
	char	c;

	if (x < 10)
	{
		c = x + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (x / 10) + 48;
	write(1, &c, 1);
	c = (x % 10) + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] <= 98)
	{
		a[1] = a[0] + 1;
		while (a[1] <= 99)
		{
			if (a[1] > a[0])
			{
				print(a[0]);
				write(1, " ", 1);
				print(a[1]);
			}
			if (a[0] == 98 && a[1] == 99)
				write(1, ".\n", 2);
			else
				write(1, ", ", 2);
			a[1]++;
		}
		a[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
