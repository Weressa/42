/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:11:29 by assabich          #+#    #+#             */
/*   Updated: 2025/02/20 15:51:35 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_error(t_stack **a, char **av, bool flag)
{
	free_stack(a);
	if (flag)
		free(av);
	write(2, "Error\n", 6);
	exit(1);
}
