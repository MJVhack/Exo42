/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 03:20:07 by evild             #+#    #+#             */
/*   Updated: 2026/08/01 13:06:55 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

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
