/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:47 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 16:19:52 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *polla, ...)
{
	va_list	ano;
	int		counter;
	int		format_count;

	va_start(ano, polla);
	if (!polla)
		return (NULL);
	while (polla)
	{
		if (*polla != '%')
		{
			if (ft_putchar(*polla) == -1)
				return (counter);
			++counter;
			++polla;
		}
		else
		{
			format_count = ft_types(++polla, ano, &counter);
			if (format_count == -1)
				return (counter);
		}
	}
	return (counter);
	va_end(ano);
}

int	ft_types(char c, va_list ano, int *count)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ano, char)));
	else if (c == 's')
		return (ft_putstr(va_arg(ano, char *), count));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (ft_putnbr(va_arg(ano, int), count));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(ano, int), count));
	else if (c == 'X')
		return (ft_hexa_upper(va_arg(ano, int), count));
	else if (c == 'x')
		return (ft_hexa_lower(va_arg(ano, int), count));
	else if (c == '%')
		return (ft_putchar('%'));
}