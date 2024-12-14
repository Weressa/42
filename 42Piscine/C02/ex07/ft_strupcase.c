/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:23:53 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 09:50:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char chaine[] = "TexteT123";
	char chaine2[] = "TXT";

	printf("%s\n", ft_strupcase(chaine));
	printf("%s\n", ft_strupcase(chaine2));

	return (0);
}*/
