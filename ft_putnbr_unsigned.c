/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:39:16 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 20:22:56 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int *count)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 10)
	{
		if (ft_putnbr(nb / 10, count) == -1)
			return (-1);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		if (ft_putchar(nb + 48) == -1)
			return (-1);
		++(*count);
	}
	return (*count);
}

/*int main()
{
	ft_printf("%u", -1);
	write(1, "\n", 1);
	int a = printf("%u", -1);
	printf("%d", a);
}*/