/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 03:20:07 by evild             #+#    #+#             */
/*   Updated: 2026/08/01 12:50:37 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void    ft_main_base_hex(char *str)
{
    while (*str)
	{
		ft_print_hex(*str);
        str++;
	}
}

char    *ft_convert_to_bin(char c, char *bin)
{
    int        i;
    char    bit[2];

    i = 7;
    bin[0] = '\0';
    while (i >= 0)
    {
        bit[0] = ((c >> i) & 1) + '0';
        bit[1] = '\0';
        ft_strcat(bin, bit);
        i--;
    }
    return (bin);
}

void	ft_main_base_bin(char *str)
{
	char bin[8];
	while (*str)
	{
		ft_convert_to_bin(*str, bin);
		ft_putstr(bin);
		str++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
    t_uint size = ft_strlen(base);
	if (nbr < 0)
		ft_putstr("(-)");
        nbr = -nbr;
    if (nbr >= size)
	{
		ft_putnbr_base(nbr / size, base);
	}
	ft_putchar(base[nbr%size]);

}
