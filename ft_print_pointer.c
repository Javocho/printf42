/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:23:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/06 14:41:47 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long n, int *count)
{
	if (!n)
		return (0);
	if (write(1, "0x", 2) == -1)
	{
		return (-1);
	}
	*count += 2;
	if (ft_hexa_lower(n, count) == -1)
		return (-1);
	return (*count);
}

