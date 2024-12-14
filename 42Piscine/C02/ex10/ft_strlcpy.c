/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:29:11 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 14:43:28 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{ 
	char chaine[] = "Texte", copie[100] = {0};
	int m;

	m = 7;

	printf("chaine vaut : %s\n", chaine);
	printf("taille vaut : %u\n", ft_strlcpy(copie, chaine, m));
	printf("copie vaut : %s\n", copie);
	return 0;
}*/
