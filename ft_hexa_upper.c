/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:46:57 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/06 12:56:44 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_i_hexa_upper(int nb, int *counter)
{
	unsigned int	n;

	n = nb;
	if (n > 15)
	{
		if (ft_i_hexa_upper(n / 16, counter) == -1)
			return (-1);
	}
	if ((n % 16) < 10)
	{
		if (ft_putchar((n % 16) + '0', counter) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar((n % 16) - 10 + 'A', counter) == -1)
			return (-1);
	}
	return (*counter);
}

int	ft_hexa_upper(int n, int *counter)
{
	return (ft_i_hexa_upper(n, counter));
}
