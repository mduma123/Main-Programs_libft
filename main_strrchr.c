/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:55:14 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:57:53 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Find the last occurrence of a character in a string

int main( void )
  {
    printf( "%s\n", ft_strrchr( "abcdeabcde", 'a' ) );
    if( ft_strrchr( "abcdeabcde", 'x' ) == NULL )
      printf( "NULL\n" );
    return (0);
  }
