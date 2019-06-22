/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:26:40 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:02:40 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Find the first occurrence of a character in a buffer
int main( void )
{
    char buffer[80];
    char* where;

    ft_strcpy( buffer, "video x-rays" );

    where = (char *) memchr( buffer, 'x', 6 );
    if( where == NULL ) {
        printf( "'x' not found\n" );
    } else {
        printf( "%s\n", where );
    }

    where = (char *) ft_memchr( buffer, 'r', 9 );
    if( where == NULL ) {
        printf( "'r' not found\n" );
    } else {
        printf( "%s\n", where );
    }
    
    return EXIT_SUCCESS;
}
