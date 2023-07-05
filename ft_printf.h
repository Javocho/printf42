/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:43 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 16:48:40 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *polla, ...);
int	ft_putchar(char c);
int	ft_types(char c, va_list ano, int *counter);
int	ft_putstr(char *s, int *counter);
int	ft_putnbr(int nb, int *counter);
int	ft_hexa_upper(int n, int *counter);
int	ft_hexa_lower(int n, int *counter);
int	ft_print_pointer(int n, int *count);

#endif