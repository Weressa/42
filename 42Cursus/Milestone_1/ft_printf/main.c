/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 18:36:07 by assabich          #+#    #+#             */
/*   Updated: 2025/01/10 14:05:29 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{


	ft_printf("Null pointer: %p\n", NULL);    // Expected output: "Null pointer: (nil)"
	printf("Null pointer: %p\n", NULL);    // Expected output: "Null pointer: (nil)"

	ft_printf("Non-null pointer: %p\n", &main); // Expected: "Non-null pointer: 0x<address>"
	printf("Non-null pointer: %p\n", &main); // Expected: "Non-null pointer: 0x<address>"

	ft_printf("%d\n", ft_printf("%s", "essai"));
	printf("%d\n", printf("%s", "essai"));
	
	ft_printf("%d\n", ft_printf("%%"));
	printf("%d\n", printf("%%"));    

    	ft_printf("%d\n", ft_printf("%i", 012));
	printf("%d\n", printf("%i", 012));
    
   	ft_printf("%d\n", ft_printf("%d"));
	
//printf("%d\n", printf("%d"));
	
    return (0);
}
