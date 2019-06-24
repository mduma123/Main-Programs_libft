/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:23:45 by mduma             #+#    #+#             */
/*   Updated: 2019/06/24 12:54:15 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

int main(void)
{
	//int fd = open("Test.txt", O_WRONLY);
	int fd = 1;
	ft_putstr_fd("I do not want to live like this", fd);
	return (0);
}
