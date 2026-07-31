/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 04:47:25 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/31 16:33:32 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multift.h"
#include <unistd.h>

//-------------------------------------------------
// FT: Put                                        |
//-------------------------------------------------
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long integer)
{
	if (integer < 0)
	{
		ft_putchar('-');
		integer = -integer;
	}
	if (integer >= 10)
	{
		ft_putnbr(integer / 10);
	}
	ft_putchar((integer % 10) + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_atoi(char *str)
{
	char	sign;
	char	other_sign;
	char	tmp;

	sign = '+';
	other_sign = '-';
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			tmp = other_sign;
			other_sign = sign;
			sign = tmp;
		}
		str++;
	}
	ft_putchar(sign);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
