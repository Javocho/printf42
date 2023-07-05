/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:47 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 18:08:13 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *polla, ...)
{
	va_list	ano;
	int		counter;
	int		format_count;

	counter = 0;
	va_start(ano, polla);
	if (!polla)
		return (0);
	while (*polla != '\0')
	{
		if (*polla != '%')
		{
			if (ft_putchar(*polla) == -1)
				return (-1);
			++counter;
			++polla;
		}
		else
		{
			format_count = ft_types(*(++polla), ano, &counter);
			if (format_count == -1)
				return (-1);
			polla++;
		}
	}
	return (counter);
	va_end(ano);
}

int	ft_types(char c, va_list ano, int *count)
{
	if (c == 'c')
	{
		(*count)++;
		return (ft_putchar(va_arg(ano, int)));
	}
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
	return (-1);
}
/*int main()
{
	int a = 0;
	int b = 0;

	a = ft_printf("%c",'c');
	printf("\n");
	b = printf("%c", 'c');

	printf("\nmi printf %d",a);
	printf("\nsu printf %d",b);
}
*/