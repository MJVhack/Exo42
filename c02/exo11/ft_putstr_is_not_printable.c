/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_is_not_printable.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 20:01:34 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/07/10 14:10:14 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void	ft_print_hex(char c)
{
	if (c <= 9)
	{
		ft_putchar(c + '0');
	}
	else
	{
		ft_putchar((c % 10) + 'A');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_print_hex(str[i] / 16);
			ft_print_hex(str[i] % 16);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}
