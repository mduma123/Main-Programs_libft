/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:11:03 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:01:50 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "libft.h"

char* msg = "This is the string: not copied";

//Copy bytes between buffers until a given byte is found
int main( void )
{
    char buffer[80];

    ft_memset( buffer, '\0', 80 );
   	ft_memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
    
    return EXIT_SUCCESS;
}
