/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:51:25 by assabich          #+#    #+#             */
/*   Updated: 2024/06/30 16:45:58 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (i < '7' && j <= '8' && k <= '9')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				print(i, j, k);
				k++;
			}
			k = j + 2;
			j++;
		}
		k = i + 3;
		j = i + 2;
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
