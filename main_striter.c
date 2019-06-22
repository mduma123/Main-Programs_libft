/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:21:04 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:23:00 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	one(char *c)
{
	*c = ft_toupper(*c);
}

int		main(void)
{
	void (*name)(char *);
	name = &one;

	char s[] = "mxolisi";
	ft_putstr(s);
	ft_putchar('\n');
	ft_striter(s, name);
	ft_putstr(s);
	ft_putchar('\n');
	return (0);
}
