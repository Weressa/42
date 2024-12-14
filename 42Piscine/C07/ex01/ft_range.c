/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:51:51 by assabich          #+#    #+#             */
/*   Updated: 2024/07/14 15:10:08 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		tab = (int *) malloc((max - min) * sizeof(int));
		if (tab == NULL)
			return (NULL);
		while (min < max)
		{
			tab[i] = min++;
			i++;
		}
		return (tab);
	}
}
