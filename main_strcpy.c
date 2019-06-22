/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:47:38 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:24:51 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Copy a string
//opies the string pointed to by src (including the terminating NUL character) into the array pointed to by dst.
int main( void )
{
    char Details[50];

    ft_strcpy( Details, "Mxolisi " );
    ft_strcat( Details, "Duma" );

    printf( "%s\n", Details );

    return (0);
}
