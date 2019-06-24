/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:15:17 by mduma             #+#    #+#             */
/*   Updated: 2019/06/24 08:28:11 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char WeThinkCode [80];

	size_t i;

	ft_strcpy( WeThinkCode, "Hello bkejfjbvjharbiervhbre" );
    i = ft_strlcat( WeThinkCode, "world", 8 );
    ft_putnbr((int)i);
	ft_putchar('\n');
	ft_putendl(WeThinkCode);

	return (0);
}
