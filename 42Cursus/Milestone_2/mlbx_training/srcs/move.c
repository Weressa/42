/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:11:31 by assabich          #+#    #+#             */
/*   Updated: 2025/03/10 13:44:26 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

// Move player if the target position is valid
void move_player(t_game *game, int dx, int dy)
{
    int new_x = game->player_x + dx;
    int new_y = game->player_y + dy;

    if (game->map[new_y][new_x] != '1')  // Check if not a wall
    {
        game->player_x = new_x;
        game->player_y = new_y;
    }
}

// Handle keyboard input
int key_hook(int key, t_game *game)
{
    if (key == 65307) // ESC key exits
        exit(0);
    else if (key == 'w') move_player(game, 0, -1);  // Up
    else if (key == 's') move_player(game, 0, 1);   // Down
    else if (key == 'a') move_player(game, -1, 0);  // Left
    else if (key == 'd') move_player(game, 1, 0);   // Right
    return (0);
}