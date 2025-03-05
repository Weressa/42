# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: assabich <assabich@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 15:12:44 by assabich          #+#    #+#              #
#    Updated: 2025/03/05 15:25:58 by assabich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MLX_DIR = minilibx-linux
LIBFT_DIR = libft
MLX_FLAGS = -L$(MLX_DIR) -lmlx -lXext -lX11
LIBFT_FLAGS = -L$(LIBFT_DIR) -lft
INCLUDE = -I includes -I $(MLX_DIR) -I $(LIBFT_DIR)/includes

# Source Files and Object Files
SRC = srcs/main.c srcs/map.c srcs/move.c srcs/render.c srcs/gnl_utils.c srcs/ft_printf.c
OBJ = $(SRC:.c=.o)

# Targets
all: $(NAME)  # Default target is to build the executable

# Build the executable
$(NAME): $(OBJ)
	$(MAKE) -C $(MLX_DIR)  # Compile MiniLibX
	$(MAKE) -C $(LIBFT_DIR) # Compile Libft
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(MLX_FLAGS) $(LIBFT_FLAGS)  # Link everything together

# Clean object files
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean  # Clean Libft
	$(MAKE) -C $(MLX_DIR) clean    # Clean MiniLibX

# Full clean (including executable)
fclean: clean
	rm -f $(NAME)  # Remove the executable
	$(MAKE) -C $(LIBFT_DIR) fclean  # Clean Libft completely
	# No fclean in MiniLibX, so we just run clean instead
	$(MAKE) -C $(MLX_DIR) clean    # Clean MiniLibX completely

# Rebuild everything (clean + make)
re: fclean all

# Debug: Show variables (for troubleshooting)
debug:
	@echo $(SRC)
	@echo $(OBJ)
	@echo $(NAME)

