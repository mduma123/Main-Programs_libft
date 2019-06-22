/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 14:34:01 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 14:34:26 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main (void)
{
	if( ft_strequ("mxolisi", "mxolisi"))
		{
			printf("they match");
		}
	else
		printf("they dont match");
	return(0);
}
