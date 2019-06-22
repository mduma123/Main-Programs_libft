/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:11:51 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:26:37 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Create a duplicate of a string
//creates a duplicate of the string pointed to by src, and returns a pointer to the new copy.
int main( void )
{
    char *Dumadup;

    Dumadup = ft_strdup( "Mxolisi" );
    printf( "%s\n", Dumadup );
    free (Dumadup);

    return (0);
}

