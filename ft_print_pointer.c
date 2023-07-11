/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:23:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/11 18:24:50 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long n, int *count)
{
	if (!n)
	{
		if (!write(1, "0x0", 3))
			return (-1);
		*count += 3;
		return (*count);
	}
	if (write(1, "0x", 2) == -1)
	{
		return (-1);
	}
	*count += 2;
	if (ft_hexa_lower(n, count) == -1)
		return (-1);
	return (*count);
}
