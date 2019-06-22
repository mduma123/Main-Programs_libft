/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:00:51 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:04:52 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "libft.h"

//Copy bytes from one buffer to another
//copies length bytes from the buffer pointed to by src into the buffer pointed to by dst.

//Note:	Copying overlapping buffers isn't guaranteed to work; use memmove() to to copy buffers that overlap.

int main () {
   const char src[50] = "Mxolisi Duma";
   char dest[50];
   ft_strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
