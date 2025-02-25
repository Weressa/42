# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: assabich <assabich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 19:23:26 by assabich          #+#    #+#              #
#    Updated: 2025/02/23 17:18:51 by assabich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -g3
NAME = push_swap

SRC =	append_node.c \
	bit_max.c \
	stack_size.c \
	create_stack.c \
	ft_split.c \
	ft_strlen.c \
	ft_substr.c \
	ft_strlcpy.c \
	ft_strchr.c \
	ft_atol.c \
	ft_repited.c \
	free_av.c \
	error_syntax.c \
	free_error.c \
	free_stack.c \
	last_node.c \
	main.c \
	radix.c \
	pa.c \
	pb.c \
	ra.c \
	rb.c \
	rr.c \
	rra.c \
	rrb.c \
	sa.c \
	sb.c \
	ss.c \
	sorted.c \
	sort3.c \
	sort5.c

INC = push_swap.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
