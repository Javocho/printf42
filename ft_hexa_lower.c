/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:19:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 12:35:58 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_i_hexa_lower(int n, int *counter)
{
	if (n > 15)
	{
		if (ft_i_hexa_lower(n / 16, counter) == -1)
			return (-1);
	}
	if ((n % 16) < 10)
	{	
		if (ft_putchar((n % 16) + '0') == -1)
			return (-1);
		*counter = *counter  + 1;
	}
	else
	{
		if (ft_putchar((n % 16) - 10 + 'a') == -1)
			return (-1);
		*counter = *counter  + 1;
	}
	return (*counter);
}

int	ft_hexa_lower(int n, int *counter)
{
	return (ft_i_hexa_lower(n, counter));
}

int main()
{
    int counter = 0;
    printf("%d", ft_hexa_lower(255, &counter));

    return 0;
}