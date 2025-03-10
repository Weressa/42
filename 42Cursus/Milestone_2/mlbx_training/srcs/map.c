/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:57:00 by assabich          #+#    #+#             */
/*   Updated: 2025/03/10 16:23:45 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int count_lines(char *filename)
{
    int fd, count = 0;
    char *line;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return (-1);
    
    while ((line = get_next_line(fd)))
    {
        count++;
        free(line);  // Don't forget to free each line after reading
    }
    close(fd);
    return (count);
}

int read_map(char *filename, t_game *game)
{
    int fd;
    int i = 0;
    int lines = count_lines(filename); // Count the number of lines in the map file

    if (lines <= 0)
        return (0);  // Return 0 if there's an issue with the map file

    // Allocate memory for the map
    game->map = malloc(sizeof(char *) * (lines + 1)); // +1 for the NULL terminator
    if (!game->map)
        return (0); // If malloc failed, return 0

    fd = open(filename, O_RDONLY); // Open the file for reading
    if (fd < 0)
        return (0); // If the file can't be opened, return 0

    // Read each line and store it in the map
    while (i < lines)
    {
        game->map[i] = get_next_line(fd); // Get each line
        if (!game->map[i]) { // Check if malloc returned NULL
            close(fd);
            // Free any already allocated lines if malloc fails
            for (int j = 0; j < i; j++) {
                free(game->map[j]);
            }
            free(game->map);  // Free the map array itself
            return (0);  // Return 0 to indicate failure
        }
        i++;
    }

    // Null-terminate the array of strings
    game->map[i] = NULL;

    close(fd);  // Close the file after reading

    // Set map_height and map_width for the game struct
    game->map_height = lines;
    game->map_width = ft_strlen(game->map[0]);  // Assumes all lines are the same length
    return (1);  // Return 1 to indicate success
}
