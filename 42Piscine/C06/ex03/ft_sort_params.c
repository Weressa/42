/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:23:27 by assabich          #+#    #+#             */
/*   Updated: 2024/07/13 12:14:50 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{	
		write(1, &str[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int	cmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
			return ((s1[l] - s2[l]));
		l++;
	}
	return ((s1[l] - s2[l]));
}

void	sort_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	j = 1;
	i = 1;
	while (i < argc - 1)
	{
		if (cmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			j = 1;
		}
		else
			j++;
	}
}

int	main(int argc, char **argv)
{
	int		k;

	k = 1;
	sort_params(argc, argv);
	while (k < argc)
	{
		printstr(argv[k]);
		k++;
	}
	return (0);
}
