/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:30:15 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:31:24 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

{
	char *result;

	result = ft_strsub("Hello world etc", 6, 5);
	printf("%s\n", result);
	free(result);
	result = NULL;
	return (0);
}