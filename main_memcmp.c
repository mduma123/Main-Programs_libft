/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:31:43 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:03:25 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//compares length bytes of the buffer pointed to by s1 to the buffer pointed to by s2.

int main( void )
{
    char buffer[80];
    int retval;

    ft_strcpy( buffer, "World" );
    
    retval = ft_memcmp( buffer, "hello", 5 );
    if( retval < 0 ) {
        printf( "Less than\n" );
    } else if( retval == 0 ) {
        printf( "Equal to\n");
    } else {
        printf( "Greater than\n");
    }
    
    return EXIT_SUCCESS;
}
