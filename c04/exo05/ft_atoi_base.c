/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 13:06:08 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 18:22:29 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

int	ft_check_same_character(char *str, t_uint size)
{
	t_uint	a;
	t_uint	b;

	a = 0;
	while (a <= (size - 1))
	{
		b = a + 1;
		while (b <= (size - 1))
		{
			if (str[a] == str[b])
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

int	ft_check_base(char *base, t_uint size)
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

char	*ft_sign(char *str)
{
	int	i;

	i = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			i = !i;
		}
		str++;
	}
	ft_putchar("+-"[i]);
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	t_uint	size;
	int		retvar;

	size = ft_strlen(base);
	if (ft_check_base(base, size) != 0)
		return (-1);
	while (*str == ' ')
		str++;
	str = ft_sign(str);
	retvar = 0;
	while (*str)
	{
		retvar = ft_intcat(retvar, ft_strchr(base, *str) - base);
		str++;
	}
	return (retvar);
}

int	main(void)
{
	ft_putnbr(ft_atoi_base("      +--++++------123456", "0123456789"));
	ft_putchar('\n');
}
