/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:09:10 by assabich          #+#    #+#             */
/*   Updated: 2024/07/11 13:28:41 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	d;

	d = 2;
	if (nb > 1)
	{
		while (d <= nb / d)
		{
			if (nb % d == 0)
				return (0);
			d++;
		}
		return (1);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 0)
		{
			nb++;
			if (ft_is_prime(nb) == 1)
				return (nb);
		}
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
		ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
		ft_find_next_prime(0) == 2 ? "OK" : "Fail",
		ft_find_next_prime(1) == 2 ? "OK" : "Fail",
		ft_find_next_prime(2) == 2 ? "OK" : "Fail",
		ft_find_next_prime(3) == 3 ? "OK" : "Fail",
		ft_find_next_prime(4) == 5 ? "OK" : "Fail",
		ft_find_next_prime(5) == 5 ? "OK" : "Fail",
		ft_find_next_prime(6) == 7 ? "OK" : "Fail",
		ft_find_next_prime(7) == 7 ? "OK" : "Fail",
		ft_find_next_prime(10) == 11 ? "OK" : "Fail",
		ft_find_next_prime(11) == 11 ? "OK" : "Fail",
		ft_find_next_prime(13) == 13 ? "OK" : "Fail",
		ft_find_next_prime(19) == 19 ? "OK" : "Fail",
		ft_find_next_prime(20) == 23 ? "OK" : "Fail"
		  );
	return (0);
}*/
