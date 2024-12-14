/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:16:18 by assabich          #+#    #+#             */
/*   Updated: 2024/07/03 14:19:10 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && n)
	{
		*(dest + i++) = *src++;
		--n;
	}
	while (n--)
		*(dest + i++) = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{ 
	char chaine[] = "Texte", copie[100] = {0};
	int m;

	m = 7;
	ft_strncpy(copie, chaine, m);

	printf("chaine vaut : %s\n", chaine);
	printf("copie vaut : %s\n", copie);

	return 0;
}*/
