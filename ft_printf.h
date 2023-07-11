/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:43 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/10 22:53:37 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(char const *polla, ...);
int	ft_putchar(char c, int *counter);
int	ft_types(char c, va_list ano, int *counter);
int	ft_putstr(char *s, int *counter);
int	ft_putnbr(int nb, int *counter);
int	ft_putnbr_unsigned(unsigned int n, int *count);
int	ft_hexa_upper(int n, int *counter);
int	ft_hexa_lower(int n, int *counter);
int	ft_print_pointer(unsigned long long n, int *count);
int	ft_printf_process(char const *polla, va_list ano);

#endif