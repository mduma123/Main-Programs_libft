/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:40:39 by mduma             #+#    #+#             */
/*   Updated: 2019/06/14 07:47:26 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include "stdio.h"


//Convert a string into an integer
//converts the string pointed to by ptr to an int and returns the converted integer.
int main (void) 
{
   int x;

    x = atoi( "-289" );
    printf( "x = %d\n", x );
    return (0);
}
