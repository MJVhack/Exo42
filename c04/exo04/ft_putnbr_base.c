/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 03:20:07 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 11:04:57 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

int	ft_check_same_character(char *str, t_uint size)
{
	int a;
	int b;

	a = 0;
	while (a <= (size - 1))
	{
		b = 0;
		while (b <= (size - 1))
		{
			if (str[a] == str[b])
				return (1);
		}
	}
	return (0);
}

int ft_check_base(char *base, t_uint size)
{
	if (ft_check_same_character(base, size) != 0)
		return (1);
	while (*base)
	{
		if (*base >= 126 || *base == ' ' || *base == '+' || *base == '-')
			return (1);
		base++;
	}
	return (0);
}


void	ft_putnbr_base(int nbr, char *base)
{
    t_uint size;

	size = ft_strlen(base);
	if (ft_check_base(base, size))
		return ;
	if (nbr < 0)
		ft_putstr("(-)");
        nbr = -nbr;
    if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
	}
	ft_putchar(base[nbr%size]);
}
