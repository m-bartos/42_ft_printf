/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:07:53 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/31 16:07:30 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_type(char type, va_list args)
{
	char	c;

	if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(args, int));
	if (type == 'u')
		ft_putunsnbr(va_arg(args, unsigned int));
	else if (type == 'c')
	{
		c = (unsigned char) va_arg(args, int);
		ft_putchar(c);
	}
	else if (type == 's')
		ft_putstr(va_arg(args, char *));
	else if (type == 'x')
		ft_puthexa(va_arg(args, long long int), 'h');
	else if (type == 'X')
		ft_puthexa(va_arg(args, long long int), 'H');
	else if (type == 'p')
	{
		ft_putstr("0x");
		ft_puthexa(va_arg(args, long long int), 'h');
	}
	else if (type == '%')
		ft_putchar('%');
	return ;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			ft_putchar(*str);
		else
		{
			ft_print_type(*(str + 1), args);
			str++;
		}
		str++;
	}
	va_end(args);
	return (0);
}
