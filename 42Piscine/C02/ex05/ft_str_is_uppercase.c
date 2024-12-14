/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:56:55 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 09:59:14 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char chaine2[] = "TXT";
	char chaine3;

	printf("%d\n", ft_str_is_uppercase(chaine));
	printf("%d\n", ft_str_is_uppercase(chaine2));
	printf("%d\n", ft_str_is_uppercase(&chaine3));

	return (0);
}*/
