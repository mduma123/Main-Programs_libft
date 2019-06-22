/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:45:49 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:48:23 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Concatenate two strings
int main( void )
{
    char Baba[80];

    ft_strcpy( Baba, "Hello " );
    ft_strcat( Baba, "world" );

    printf( "%s\n", Baba );
    
    return (0);
}

