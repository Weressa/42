/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:16:47 by assabich          #+#    #+#             */
/*   Updated: 2025/03/05 15:16:49 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// 🛠 Standard Libraries
# include <stdlib.h>  // malloc, free, exit
# include <unistd.h>  // write, read
# include <fcntl.h>   // open
# include <stdio.h>   // printf (for debugging)

// 📚 Custom Libraries
# include "mlx.h"     // MiniLibX for graphics
# include "libft.h"   // Libft (includes get_next_line & ft_printf)

// 🎮 Game Constants
# define TILE_SIZE 32  // Size of each tile in pixels
# define ESC_KEY 65307 // Key code for ESC (Exit)
# define UP_KEY 119    // 'w' key
# define DOWN_KEY 115  // 's' key
# define LEFT_KEY 97   // 'a' key
# define RIGHT_KEY 100 // 'd' key

// 🎨 Texture Paths
# define WALL_TEXTURE "assets/wall.xpm"
# define FLOOR_TEXTURE "assets/floor.xpm"
# define PLAYER_TEXTURE "assets/player.xpm"
# define COLLECTIBLE_TEXTURE "assets/collectible.xpm"
# define EXIT_TEXTURE "assets/exit.xpm"

// 🏗 Game Structure
typedef struct s_game
{
    void    *mlx;        // MLX pointer (connection)
    void    *win;        // Window pointer
    char    **map;       // 2D array storing the map
    int     map_width;   // Width of the map (in tiles)
    int     map_height;  // Height of the map (in tiles)
    
    int     player_x;    // Player's X position (column)
    int     player_y;    // Player's Y position (row)
    int     collectibles; // Number of collectibles left
    int     moves;       // Move counter

    // 🖼 Images for rendering
    void    *img_wall;
    void    *img_floor;
    void    *img_player;
    void    *img_collectible;
    void    *img_exit;
}   t_game;

// 🗺 Map Functions
char    **read_map(char *filename); // Read .ber file into 2D array
void    free_map(char **map);       // Free allocated memory for map

// 🎨 Rendering Functions
void    load_textures(t_game *game); // Load all textures
void    render_map(t_game *game);    // Draw the map to the screen

// 🎮 Player Movement
void    move_player(t_game *game, int dx, int dy);
int     key_hook(int key, t_game *game);

// 🔄 Game Loop & Exit
void    game_loop(t_game *game);
void    close_game(t_game *game);

#endif
