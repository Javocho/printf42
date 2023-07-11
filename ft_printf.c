/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:20:47 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/11 21:12:03 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *polla, ...)
{
	va_list	ano;
	int		n;

	va_start(ano, polla);
	n = ft_printf_process(polla, ano);
	va_end(ano);
	return (n);
}

int	ft_printf_process(char const *polla, va_list ano)
{
	int		counter;
	int		format_count;

	counter = 0;
	if (!polla)
		return (0);
	while (*polla != '\0')
	{
		if (*polla != '%')
		{
			if (ft_putchar(*polla, &counter) == -1)
				return (-1);
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
}

int	ft_types(char c, va_list ano, int *count)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ano, int), count));
	else if (c == 's')
		return (ft_putstr(va_arg(ano, char *), count));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ano, int), count));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(ano, unsigned int), count));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(ano, unsigned long long), count));
	else if (c == 'X')
		return (ft_hexa_upper(va_arg(ano, int), count));
	else if (c == 'x')
		return (ft_hexa_lower(va_arg(ano, int), count));
	else if (c == '%')
		return (ft_putchar('%', count));
	return (-1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int b;
// 	b = printf("jaja culo %p\n", "");
// 	printf("%d\n", b);
// 	b = ft_printf("jaja culo %p\n", "");
// 	printf("%d", b);
//}

/*
		test_printf("%p", "");
		test_printf("%p", NULL);
		test_printf("%p", (void *)-14523);
		test_printf("0x%p-", (void *)ULONG_MAX);
		test_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
*/