/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:08:08 by assabich          #+#    #+#             */
/*   Updated: 2025/02/21 19:35:49 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	long			value;
}	t_stack;

//program
int		main(int ac, char **av);

//fn split string to av
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	**ft_split(char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);

//create stack
void	create_stack(t_stack **a, char **av, bool flag);
long	ft_atol(char *str);
void	append_node(t_stack **a, long nbr);
t_stack	*last_node(t_stack *head);

// free and error 
int		error_syntax(char *str);
int		ft_repited(t_stack *a, long nbr);
void	free_error(t_stack **a, char **av, bool flag);
void	free_stack(t_stack **a);
void	free_av(char **av);

//sorting
int		stack_size(t_stack *a);
int		bit_max(t_stack *a);
void	radix(t_stack **a, t_stack **b);

//commands
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

#endif
