/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 13:15:05 by mduma             #+#    #+#             */
/*   Updated: 2019/06/20 13:15:45 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		tester( unsigned int i, char c)
{
	return(c + i);
}
int		main(void)
{
	char *result;

	result = ft_strmapi("abcdefghi", &tester);
	printf("%s", result);
	return (0);
}

