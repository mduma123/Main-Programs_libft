/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 14:07:50 by mduma             #+#    #+#             */
/*   Updated: 2019/06/22 14:08:39 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main (void)
{

	char toto[] = "yalah";

	printf("before strclr = [%s]\n", toto);
	ft_strclr(toto);
	printf(" after strclr = [%s]\n", toto);
	return(0);

}
