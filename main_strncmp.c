/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:17:20 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 16:23:00 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//Compare two strings, up to a given length
//Returns < 0 s1 is less than s2 .0 s1 is equal to s2 .> 0s1 is greater than s2.

int main( void )
  {
    printf( "%d\n", ft_strncmp( "abcdef", "abcDEF", 10 ) );
    printf( "%d\n", ft_strncmp( "abcdef", "abcDEF",  6 ) );
    printf( "%d\n", ft_strncmp( "abcdef", "abcDEF",  3 ) );
    printf( "%d\n", ft_strncmp( "abcdef", "abcDEF",  0 ) );
    return (0);
  }
