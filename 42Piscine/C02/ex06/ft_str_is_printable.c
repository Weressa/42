/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:00:16 by assabich          #+#    #+#             */
/*   Updated: 2024/07/03 14:07:27 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	char chaine[] = "Texœ26$Š_te";
	char chaine2[] = "TXT";
	char chaine3;

	printf("%d\n", ft_str_is_printable(chaine));
	printf("%d\n", ft_str_is_printable(chaine2));
	printf("%d\n", ft_str_is_printable(&chaine3));

	return (0);
}*/
