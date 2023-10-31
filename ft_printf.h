/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:09:26 by mbartos           #+#    #+#             */
/*   Updated: 2023/10/31 16:05:20 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putunsnbr(unsigned int n);
void	ft_puthexa(long long int n, char hex_base);
void	ft_putstr(char *s);
void	ft_which_type(char type, va_list args);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *s);

#endif