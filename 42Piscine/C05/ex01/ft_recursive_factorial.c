* ************************************************************************** */
*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:11:28 by assabich          #+#    #+#             */
/*   Updated: 2024/11/10 12:04:08 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 0;
	if (nb == 0)
		r = 1;
	else if (nb > 0)
		r = nb * ft_recursive_factorial(nb - 1);
	return (r);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}*/
