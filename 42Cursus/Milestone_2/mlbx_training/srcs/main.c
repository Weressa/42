/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:33:03 by assabich          #+#    #+#             */
/*   Updated: 2025/03/10 15:50:36 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    t_game game;

    if (argc != 2)
    {
        printf("Usage: ./so_long <map.ber>\n");
        return (1);
    }

    // Initialize MLX
    game.mlx = mlx_init();
    if (!game.mlx)
        return (printf("Error: Failed to initialize MLX\n"), 1);

    // Load map from file
    if (!read_map(argv[1], &game))
    return (printf("Error: Failed to load map\n"), 1);

    // Create window size based on map dimensions
    game.win = mlx_new_window(game.mlx, game.map_width * TILE_SIZE, game.map_height * TILE_SIZE, "so_long");
    if (!game.win)
        return (printf("Error: Failed to create window\n"), 1);

    // Load all textures
    load_textures(&game);

    // Render the map
    render_map(&game);

    // Event hooks (optional for now)
    // mlx_hook(game.win, 2, 1L<<0, handle_keypress, &game);
    // mlx_hook(game.win, 17, 0, close_game, &game);

    // Start the main loop
    mlx_loop(game.mlx);

    return (0);
}
