/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <assabich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:33:03 by assabich          #+#    #+#             */
/*   Updated: 2025/03/05 12:56:48 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    void    *mlx;
    void    *win;

    mlx = mlx_init();
    if (!mlx)
    {
        printf("Error: Failed to initialize MLX\n");
        return (1);
    }
    win = mlx_new_window(mlx, 640, 480, "so_long");
    if (!win)
    {
        printf("Error: Failed to create window\n");
        return (1);
    }
    mlx_loop(mlx);
    return (0);
}