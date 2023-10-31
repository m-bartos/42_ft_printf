/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:51 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/31 16:13:38 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//cc -Wall -Wextra -Werror ./test/main.c ft_strdup.c ft_puthexa.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsnbr.c ft_strlen.c && ./a.out

#include <stdio.h>
int	main (void)
{
	char	str[] = "ahoj";
	char	*nic;

	nic = str;
	ft_printf("Ahoj %p %x %X %u %d %d %s %% %s %c \naaaa.", nic, -300, -300, -15, 3, 5, "NE", "%", 99);
	printf("\n");
	printf("Ahoj %p %x %X %u %d %d %s %% %s %c \naaaa.", nic, -300, -300, -15, 3, 5, "NE", "%", 99);
}
