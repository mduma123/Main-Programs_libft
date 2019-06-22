/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:50:10 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 15:23:24 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h" 
#include "string.h" 
#include "libft.h"

//Set memory to a given value
//fills length bytes starting at dst with the value c.

int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
   	ft_memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After ft_ memset():  %s", str); 
    return 0; 
} 
