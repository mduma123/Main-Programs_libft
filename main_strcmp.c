/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:11:12 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 16:16:33 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

//Compare two strings

int main( void )
{
    printf( "%d\n", ft_strcmp( "abcdef", "abcdef" ) );
    printf( "%d\n", ft_strcmp( "abcdef", "abc" ) );
    printf( "%d\n", ft_strcmp( "abc", "abcdef" ) );
	return(0);
}
