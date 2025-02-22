/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:19:44 by assabich          #+#    #+#             */
/*   Updated: 2025/02/22 18:50:39 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "push_swap.h"

int	min_index(t_stack *a)
{
	t_stack	*temp;
	int		min;
	int		i;

	temp = a;
	min = temp->value;
	i = 0;
	while (temp)
	{
		if (temp->value < min)
		{
			min = temp->value;
			i = temp->index;
		}
		temp = temp->next;
	}
	printf("%d\n", i);
	return (i);
}

void	sort5(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int	i;
	int	n;

	temp = NULL;
	n = 1;
	i = 0;
	while(n >= 0)
	{
		i = min_index(*a);
		while (i > 0)
		{
			rra(a);
			i--;
		}
		pb(a, b);
		n--;
	}
	temp = *a;
	while (temp)
	{
		printf("%ld  ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	sort3(a);
	pa(a, b);
	pa(a, b);
}
*/
#include "push_swap.h"

int min_index(t_stack *a)
{
    t_stack *temp;
    int min;
    int min_pos;
    int i;

    if (!a)
        return (-1); // Return -1 if stack is empty

    temp = a;
    min = temp->value;
    min_pos = 0;
    i = 0;

    while (temp)
    {
        if (temp->value < min)
        {
            min = temp->value;
            min_pos = i; // Store the relative position
        }
        temp = temp->next;
        i++;
    }

    return (min_pos); // Return the actual position in the current stack
}

void sort5(t_stack **a, t_stack **b)
{
    int i;
    int size;
    int n;

    n = 2; // Number of elements to push to stack b
    while (n > 0)
    {
        size = stack_size(*a); // Get the current stack size
        i = min_index(*a); // Get the position of the minimum value

        if (i <= size / 2) // If index is in the top half
        {
            while (i > 0) // Rotate upwards
            {
                ra(a);
                i--;
            }
        }
        else // If index is in the bottom half
        {
            i = size - i; // Calculate the moves needed to rotate downwards
            while (i > 0)
            {
                rra(a); // Rotate downwards
                i--;
            }
        }
        pb(a, b); // Push the smallest value to stack b
        n--; // One less number to push
    }

    sort3(a); // Sort the remaining 3 numbers
    pa(a, b); // Move last two numbers back to stack a
    pa(a, b);
}

