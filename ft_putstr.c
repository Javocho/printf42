/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:59:46 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 19:09:13 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int *counter)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		if (write(1, s, 1) == -1)
			return (-1);
		*counter = *counter + 1;
		s++;
	}
	return (*counter);
}
