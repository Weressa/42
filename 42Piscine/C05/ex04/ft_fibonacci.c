/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:40:23 by assabich          #+#    #+#             */
/*   Updated: 2024/07/10 13:31:25 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(0));
        printf("%d\n", ft_fibonacci(1));
        printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
        printf("%d\n", ft_fibonacci(4));
        printf("%d\n", ft_fibonacci(5));
        printf("%d\n", ft_fibonacci(6));
        printf("%d\n", ft_fibonacci(7));
        printf("%d\n", ft_fibonacci(10));
	return (0);
}*/
