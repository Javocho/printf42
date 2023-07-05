/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:43 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/04 21:20:04 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H 

# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(char const *polla, ...);
int	ft_putchar(char c);
int	ft_types(char c, va_list ano);
int	putstr(char *s);
int	ft_putnbr(int nb);
int	ft_hexa_upper(int n);
int	ft_hexa_lower(int n);


#endif