/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:27:16 by mduma             #+#    #+#             */
/*   Updated: 2019/06/20 13:11:57 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	tester(char c)
{
	return (c + 4);
}

int		main(void)
{
	char *result;

	result = ft_strmap("abcdefghi", &tester);
	printf("%s", result);
	return (0);
}
