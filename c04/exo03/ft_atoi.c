/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 19:58:17 by evild             #+#    #+#             */
/*   Updated: 2026/07/31 00:48:37 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

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

int	main(void)
{
	ft_atoi("      +--+-----++--765698754");
}
