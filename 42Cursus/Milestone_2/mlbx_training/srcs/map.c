/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:57:00 by assabich          #+#    #+#             */
/*   Updated: 2025/03/05 14:22:30 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char    **read_map(char *filename)
{
    int i;
    int fd;
    char    **map;

    i = 0;
    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return (NULL);
    map = malloc(sizeof(char *) * 100)
    if (!map)
        return (NULL);
    while (get_next_line(fd))
        map[i++] = get_next_line(fd);
    map[i] = NULL;
    close (fd);
    return(map);
}