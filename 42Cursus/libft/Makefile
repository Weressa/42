# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: assabich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 17:31:56 by assabich          #+#    #+#              #
#    Updated: 2024/11/15 18:01:02 by assabich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = .  //To indicate the directory of sources files ("." for current directory)
INC_DIR = .  //To indicate the included headers directory

SRC = $(addprefix $(SRC_DIR)/, \   //Source Files used in the program addprefix allows to add source directory to the files if the are in a different directory
		ft_memmove.c \
		ft_memcpy.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strlen.c \
)

BONUS = $(addprefix $(SRC_DIR)/, \  //bonus files
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstsize.c \
		ft_lstadd_front.c \
		ft_lstdelone.c \
		ft_lstlast.c \
		ft_lstnew.c \
)

OBJS = $(SRC:.c=.o)  //object files to be created from source files .c is replaced by .o
OBJS_B = $(BONUS:.c=.o)

NAME = libft.a //Name of program to be created

CC = gcc //Complier used
AR = ar
FLAGS = -Wall -Wextra -Werror //To call the flags used for compilation
INC = $(INC_DIR)/libft.h

all: $(NAME)

$(NAME) : $(OBJS) // rule to create NAME
	$(AR) rcs $(NAME) $(OBJS)

bonus: 	$(OBJS) $(OBJS_B) 
	$(AR) rcs $(NAME) $(OBJS_B)
	
%.o: %.c $(INC) // object files creation 
	$(CC) $(FLAGS) -c $< -o $@ -I$(INC_DIR)
	
clean:
	rm -f $(OBJS) $(OBJS_B)  //To remove object files .o

fclean: clean  // to tell program to execute clean first
	rm -f $(NAME)  // then to execute this second (remove all files of NAME)

re: fclean all  // To redo all 

.PHONY: all bonus clean fclean re //add all the rules used so they wont be mistaken as files.
