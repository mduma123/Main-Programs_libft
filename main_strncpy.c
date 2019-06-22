/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:53:37 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:25:07 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

//Copy a string, to a maximum length
int main( void )
  {
    char check[15];

    printf( "%s\n", ft_strncpy( check, "Mxolisi", 8 ) );
    printf( "%s\n", ft_strncpy( check, "Malaza",  7 ) );
    printf( "%s\n", ft_strncpy( check, "William",  9 ) );
    printf( "%s\n", ft_strncpy( check, "WeThinkCode", 12) );
    
	return (0);
  }
