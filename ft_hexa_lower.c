/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:19:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/11 21:14:04 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(int nb, int *counter)
{
	unsigned long long	n;

	n = (unsigned long long)nb;
	if (n > 15)
	{
		if (ft_hexa_lower(n / 16, counter) == -1)
			return (-1);
	}
	if ((n % 16) < 10)
	{
		if (ft_putchar((n % 16) + '0', counter) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar((n % 16) - 10 + 'a', counter) == -1)
			return (-1);
	}
	return (*counter);
}

// int	ft_hexa_lower(int nb, int *counter)
// {
// 	unsigned long long	n;

// 	n = (unsigned long long)nb;
// 	if (n > 15)
// 	{
// 		if (ft_hexa_lower(n / 16, counter) == -1)
// 			return (-1);
// 	}
// 	if (write(1, (&"0123456789abcdef")[n % 16], 1) == -1)
// 		return (-1);
// 	*counter = *counter + 1;
// 	return (*counter);
// }

/*int main()
{
    int counter = 0;
    printf("%d", ft_hexa_lower(255, &counter));

    return 0;
}*/