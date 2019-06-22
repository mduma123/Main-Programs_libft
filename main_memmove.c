/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:16:13 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:07:14 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "libft.h"

//Copy bytes from one buffer to another, handling overlapping memory correctly


int main( void )
{
    char buffer[80];

    ft_strcpy( buffer, "Mxolisi");
    ft_memmove( buffer+1, buffer, 79 );
    printf ("%s\n", buffer);
    
    return (0);
}
