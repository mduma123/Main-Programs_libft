/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:15:17 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:19:40 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	char WeThinkCode [80];

	size_t i;

	ft_strcpy( WeThinkCode, "Hello " );
    i = ft_strncat( WeThinkCode, "world", 8 );
    printf( "%d\n%s", i ,WeThinkCode );

	return (0);
}
