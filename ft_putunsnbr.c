/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:05:19 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/31 15:51:46 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int n)
{
	unsigned long int	n_long;

	n_long = n;
	if (n_long > 9)
	{
		ft_putunsnbr(n_long / 10);
		ft_putunsnbr(n_long % 10);
	}
	else
	{
		ft_putchar(n_long + '0');
	}
}
