/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:49:08 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:54:34 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Find the first occurrence of a character in a string
//finds the first occurrence of c (converted to a char) in the string pointed to by s. The terminating NUL character is considered to be part of the string and returns A pointer to the located character, or NULL if c doesn't occur in the string.

int main( void )
{
    char buffer[80];
    char* where;

    ft_strcpy( buffer, "video x-rays" );

    where = ft_strchr( buffer, 'x' );

    if( where == NULL ) {
        printf( "'x' not found\n" );
    } else {
        printf( "'x' found: %s\n", where );
    }

    return (0);
}
