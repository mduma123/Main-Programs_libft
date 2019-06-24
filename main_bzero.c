/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:56:03 by mduma             #+#    #+#             */
/*   Updated: 2019/06/22 14:53:37 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"
#include <stdlib.h>

//Set the first part of an object to null bytes
//Fills the first n bytes of the object pointed to by dst with zero (NUL) bytes.
int main( void )
  {
    char mxolisi[35] = "Hello, hope the tests go well.";

	ft_putendl(mxolisi);
    ft_bzero(mxolisi, ft_strlen(mxolisi));
	write(1, mxolisi, ft_strlen(mxolisi));
    return (0);
  }
