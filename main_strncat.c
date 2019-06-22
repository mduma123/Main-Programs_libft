/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:40:39 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:16:52 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

//Concatenate two strings, up to a maximum length

char WeThinkCode[80];

int main( void )
  {
    ft_strcpy( WeThinkCode, "Hello " );
    ft_strncat( WeThinkCode, "world", 8 );
    printf( "%s\n", WeThinkCode );
       
	return (0);
  }
