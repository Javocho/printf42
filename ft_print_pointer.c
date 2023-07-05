/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:23:27 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/04 21:26:28 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_pointer(int n)
{
	int	count;

	if (write(1, "0x", 2) == -1)
		return (-1);
	count += 2;
	count += ft_hexa_lower(n);
	return (count);
}
