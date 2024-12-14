/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:41:19 by assabich          #+#    #+#             */
/*   Updated: 2024/07/16 16:41:37 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = strl(dest);
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	taille(int size, char **strs, char *sep)
{
	int	j;
	int	st;

	st = 0;
	j = 1;
	while (j <= size)
	{
		st += strl(strs[j]);
		if (j < size)
			st += strl(sep);
		j++;
	}
	return (st);
}

char	*cat(int size, char **strs, char *sep, char *sg)
{
	int	i;

	i = 0;
	sg[0] = '\0';
	while (i < size)
	{
		ft_strcat(sg, strs[i]);
		if (i < (size - 1))
			ft_strcat(sg, sep);
		i++;
	}
	return (sg);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sg;
	int		st;

	if (size == 0)
	{
		sg = (char *)malloc(1);
		if (sg == NULL)
			return (NULL);
		sg[0] = '\0';
		return (sg);
	}	
	else
	{	
		st = taille(size, strs, sep);
		sg = (char *)malloc((st + 1) * sizeof(char));
		if (sg == NULL)
			return (NULL);
		sg = cat(size, strs, sep, sg);
		return (sg);
	}
}
