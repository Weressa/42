/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:25:52 by assabich          #+#    #+#             */
/*   Updated: 2024/07/03 12:29:42 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char chaine[] = "Tex0262te";
	char chaine2[] = "123";
	char chaine3;

	printf("%d\n", ft_str_is_numeric(chaine));
	printf("%d\n", ft_str_is_numeric(chaine2));
	printf("%d\n", ft_str_is_numeric(&chaine3));

	return 0;
}*/
