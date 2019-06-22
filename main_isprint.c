/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:52:16 by mduma             #+#    #+#             */
/*   Updated: 2019/06/13 15:57:13 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main ()
{
   int var1 = 'k';
   int var2 = '\t';

   if( ft_isprint(var1) )
   {
      printf("var1 = |%c| can be printed\n", var1 );
   }
   else
   {
      printf("var1 = |%c| can't be printed\n", var1 );
   }

   if( ft_isprint(var2) )
   {
      printf("var2 = |%c| can be printed\n", var2 );
   }
   else
   {
      printf("var2 = |%c| can't be printed\n", var2 );
   }
	return(0);
}
