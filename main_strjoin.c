/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:14:31 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:14:48 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int		main()
{
	char str1[] = "Hey";
	char str2[] = "William";
	char *ret;

	ret = ft_strjoin(str1, str2);
	printf("%s\n", ret);
	return (0);
}
