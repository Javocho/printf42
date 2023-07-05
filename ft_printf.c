/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:47 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/04 21:20:48 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *polla, ...)
{
	va_list	ano;
	int		counter;

	va_start(ano, polla);
	if (!polla)
		return (NULL);
	while (polla)
	{
		if (*polla != '%')
		{
			if (ft_putchar(*polla) == -1)
				return (NULL);
			++counter;
			++polla;
		}
		else
		{

		}
	}
	va_end(ano);
}

int	ft_types(char c, va_list ano)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ano, char)));
	else if (c == 's')
		return (ft_putstr(va_arg(ano, char *)));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_putnbr(va_arg(ano, int)));
	else if (c == 'p')
		
	else if (c == 'X')
		return (ft_hexa_upper(va_arg(ano, int)));
	else if (c == 'x')
		return (ft_hexa_lower(va_arg(ano, int)));
	else if (c == '%')
		return (ft_putchar('%'));
}