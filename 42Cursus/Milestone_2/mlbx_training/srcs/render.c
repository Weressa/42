/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:23:29 by assabich          #+#    #+#             */
/*   Updated: 2025/03/05 15:10:59 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    load_textures(t_game *game)
{
    game->wall_img = mlx_xpm_file_to_image(game->mlx, "assets/wall.xpm", &game->img_width, &game->height);
    game->player_img = mlx_xpm_file_to_image(game->mlx, "assets/player.xpm", &game->img_width, &game->height);
}
void    render_map(t_game *game)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y < game->map_height)
    {
        while (x < game->map_width)
        {
            if (game->map[y][x] == '1')
                mlx_put_image_to_window(game->mlx, game->win, game->wall_img, x * TILE_SIZE, y TILE_SIZE);
            if (game->map[y][x] == 'P')
                mlx_put_image_to_window(game->mlx, game->win, game->player_img, x * TILE_SIZE, y TILE_SIZE);
            x++;
        }
        y++;
    }
}
