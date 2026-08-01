/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 04:47:25 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/08/01 12:40:40 by evild            ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
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
