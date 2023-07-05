/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:34:36 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 15:45:47 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb, int *count)
{
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		nb = -nb;
		++(*count);
	}
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

/*
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}


int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		++count;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return (count + 1);
	}
	return (count);
}

int main() {
    printf("%d", ft_putnbr(-12));
}
*/
