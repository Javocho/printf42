/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:46:57 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/04 21:18:55 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexa_upper(int n)
{
	int	counter;

	counter = 0;
	if (n > 15)
		counter += ft_hexa_upper(n / 16);
	if ((n % 16) < 10)
		ft_putchar((n % 16) + '0');
	else
		ft_putchar((n % 16) - 10 + 'A');
	return (counter + 1);
}
