/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:06:56 by assabich          #+#    #+#             */
/*   Updated: 2024/07/07 11:08:42 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "MyStr";
	char s2[] = "MyTest\nOfSuccess";
	char s3[] = "0123456789abcdef";
	char s4[] = "My\tStr";
	char s5[] = "";
	printf(ft_strlen(s1) == 5 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s2) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s3) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s4) == 6 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s5) == 0 ? "Success\n" : "Fail\n");
}*/
