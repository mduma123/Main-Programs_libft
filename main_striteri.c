/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:23:15 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:25:10 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void func(unsigned int index, char *str)
{
	*str = *str + index;
}

int	main(void)
{
	char *str = ft_strdup("abcdefghi");

	ft_striteri(str, &func);
	printf("%s", str);
	return (0);
}
