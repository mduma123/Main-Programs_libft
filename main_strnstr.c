/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:02:12 by mduma             #+#    #+#             */
/*   Updated: 2019/06/12 16:10:42 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

//locates the first occurrence of the null-terminated string \c little in the string \c big, where not more 
//than \c len characters are searched
int main(void) 
{
    char *searchingFor = "stackdummy";
	char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";
	
	printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
	return (0);
}
