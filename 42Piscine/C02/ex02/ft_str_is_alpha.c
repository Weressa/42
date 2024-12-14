/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:09:12 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 09:58:27 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char chaine[] = "Tex0262te";
	char chaine2[] = "Texte";

	printf("%d\n", ft_str_is_alpha(chaine));
	printf("%d\n", ft_str_is_alpha(chaine2));

	return 0;
}*/
