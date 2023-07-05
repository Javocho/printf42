/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:59:46 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 12:46:52 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_str(char *s, int *counter)
{
	*counter = 0;
	while (s)
	{
		if (write(1, s, 1) == -1)
			return (-1);
		*counter = *counter + 1;
		s++;
	}
	return (*counter);
}
