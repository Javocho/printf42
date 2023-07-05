/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 21:19:39 by fcosta-f          #+#    #+#             */
/*   Updated: 2023/07/05 11:53:07 by fcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_i_hexa_lower(int n, int *counter)
{
	int	counter;

	counter = 0;
	if (n > 15)
		ft_hexa_lower(n / 16);
	if ((n % 16) < 10)
		if (ft_putchar((n % 16) + '0') == -1)
			return (-1);
		else
			++counter;
	else
	{
		if (ft_putchar((n % 16) - 10 + 'a') == -1)
			return (-1);
		else
			++counter;
	}
	return (counter);
}

int	ft_hexa_lower(int n, int *counter)
{
	return (ft_i_hexa_lower(n, &counter));
}

int main()
{
    int *error = 0;
    printf("%d", ft_hexa_lower(542, &error);

    return 0;
}

/*void	ft_hexadecimal(unsigned int x, int *length, char x_or_x)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (x_or_x == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putcharacter_length('0', length);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putcharacter_length(string[i], length);
}

https://github.com/pasqualerossi/Printf/blob/main/sources/ft_words.c#L17

*/