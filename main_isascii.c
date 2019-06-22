/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:50:02 by mduma             #+#    #+#             */
/*   Updated: 2019/06/13 15:50:30 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

char alpha[] = { 'A', 0x80, 'Z' };

#define SIZE sizeof( alpha ) / sizeof( char )

int main( void )
{
    int i;

    i = 0;

    for( i = 0; i < SIZE; i++ )
        if( ft_isascii( alpha[i] ) )
		{
            printf( "Char %c is an ASCII character\n",
                alpha[i] );
        } else
		{
            printf( "Char %c is not an ASCII character\n",
                alpha[i] );
        }

    return (0);
}
