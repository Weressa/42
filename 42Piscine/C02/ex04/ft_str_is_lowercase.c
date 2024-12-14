/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:30:42 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 09:52:38 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char chaine2[] = "text";
	char chaine3;

	printf("%d\n", ft_str_is_lowercase(chaine));
	printf("%d\n", ft_str_is_lowercase(chaine2));
	printf("%d\n", ft_str_is_lowercase(&chaine3));

	return 0;
}*/
