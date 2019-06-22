/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:56:03 by mduma             #+#    #+#             */
/*   Updated: 2019/06/20 14:52:39 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include <stdlib.h>

//Set the first part of an object to null bytes
//Fills the first n bytes of the object pointed to by dst with zero (NUL) bytes.
int main( void )
  {
    char Mxolisi[80];

    ft_bzero( Mxolisi, 80 );
    return (0);
  }
