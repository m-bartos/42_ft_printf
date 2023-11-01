/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:51 by mbartos           #+#    #+#             */
/*   Updated: 2023/11/01 13:55:36 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

//cc -Wall -Wextra -Werror ./test/main.c *.c && ./a.out
//("Ahoj %p %x %X %u %d %s %% %s %c \na.", nic, -30, -30, -15, 3, "NE", "%", 99)

int	main(void)
{
	int		sum;
	int		test;
	char	*test_str;

	test_str = NULL;
	test = -2147483648;
	sum = ft_printf("%x", test);
	ft_printf("\n");
	ft_printf("%x", test);
	printf("\n");
	printf("%d", sum);
	return (0);
}
