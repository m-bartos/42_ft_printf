/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:33:33 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/31 15:55:39 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	str_itoa_len(long long number)
{
	int	length;

	length = 0;
	if (number < 0)
		length++;
	else if (number == 0)
		return (1);
	while (number)
	{
		number = number / 16;
		length++;
	}
	return (length);
}

void	ft_puthexa(long long int number, char hex_base)
{
	char		*str;
	int			length;
	char		*base;

	if (hex_base == 'h')
		base = ft_strdup("0123456789abcdef");
	else if (hex_base == 'H')
		base = ft_strdup("0123456789ABCDEF");
	length = str_itoa_len(number);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return ;
	if (number == 0)
		str[0] = '0';
	str[length] = '\0';
	while (number)
	{
		str[--length] = base[number % 16];
		number = number / 16;
	}
	ft_putstr(str);
	free(str);
}
