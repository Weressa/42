/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:26:01 by assabich          #+#    #+#             */
/*   Updated: 2024/07/14 15:57:54 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *) malloc((max - min) * sizeof(int));
		if (*range == NULL)
			return (-1);
		while (min < max)
		{
			(*range)[i] = min++;
			i++;
		}
		return (i);
	}
}
