/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 08:33:33 by mduma             #+#    #+#             */
/*   Updated: 2019/06/14 08:33:40 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int		main()
{
	char str[] = "		Hey World \n ";
	char *ret;

	ret = ft_strtrim(str);
	printf("%s", ret);
	return (0);
}
