/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:51:21 by assabich          #+#    #+#             */
/*   Updated: 2024/07/04 15:12:48 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(char c)
{
	char	*vhex;
	
	vhex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, ((c / 16) + '0'), 1);
	write(1, vhex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			write(1, str[i], 1);
		else
			hex(str[i]);
		i++;
	}
}
*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*c;
	
	c = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", c);
	ft_putstr_non_printable(c);
	return (0);
}
