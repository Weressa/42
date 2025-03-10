/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:23:29 by assabich          #+#    #+#             */
/*   Updated: 2025/03/10 15:49:59 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/so_long.h"

// Load all textures from XPM files
void    load_textures(t_game *game)
{
    // Load wall texture
    game->img_wall = mlx_xpm_file_to_image(
        game->mlx, "assets/wall.xpm", &game->map_width, &game->map_height);
    
    // Load floor texture (optional fallback image if you have one)
    game->img_floor = mlx_xpm_file_to_image(
        game->mlx, "assets/floor.xpm", &game->map_width, &game->map_height);

    // Load player texture
    game->img_player = mlx_xpm_file_to_image(
        game->mlx, "assets/player.xpm", &game->map_width, &game->map_height);

    // Load collectible texture
    game->img_collectible = mlx_xpm_file_to_image(
        game->mlx, "assets/collectible.xpm", &game->map_width, &game->map_height);

    // Load exit texture
    game->img_exit = mlx_xpm_file_to_image(
        game->mlx, "assets/exit.xpm", &game->map_width, &game->map_height);
}

// Render the full map to the window
void    render_map(t_game *game)
{
    int x;
    int y;

    y = 0;
    while (y < game->map_height)
    {
        x = 0;
        while (x < game->map_width)
        {
            // Optional: draw floor by default
            mlx_put_image_to_window(game->mlx, game->win,
                game->img_floor, x * TILE_SIZE, y * TILE_SIZE);

            // Draw appropriate elements over floor
            if (game->map[y][x] == '1')
                mlx_put_image_to_window(game->mlx, game->win,
                    game->img_wall, x * TILE_SIZE, y * TILE_SIZE);
            else if (game->map[y][x] == 'P')
                mlx_put_image_to_window(game->mlx, game->win,
                    game->img_player, x * TILE_SIZE, y * TILE_SIZE);
            else if (game->map[y][x] == 'C')
                mlx_put_image_to_window(game->mlx, game->win,
                    game->img_collectible, x * TILE_SIZE, y * TILE_SIZE);
            else if (game->map[y][x] == 'E')
                mlx_put_image_to_window(game->mlx, game->win,
                    game->img_exit, x * TILE_SIZE, y * TILE_SIZE);
            x++;
        }
        y++;
    }
}
