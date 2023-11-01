/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbartos <mbartos@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:09:26 by mbartos           #+#    #+#             */
/*   Updated: 2023/11/01 13:49:45 by mbartos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

void	ft_type_choose(char type, va_list args, int *ptr_sum);
int		ft_printf(const char *str, ...);
void	ft_putchar_c(char c, int *ptr_sum);
void	ft_putnbr(int n, int *ptr_sum);
void	ft_putunsnbr(unsigned int n, int *ptr_sum);
void	ft_puthexa(unsigned int n, char hex_base, int *ptr_sum);
void	ft_putpointer(void *ptr, int *ptr_sum);
void	ft_put_ptr_hexa_adress(unsigned long number, int *ptr_sum);
void	ft_putstr_c(char *s, int *ptr_sum);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
#endif