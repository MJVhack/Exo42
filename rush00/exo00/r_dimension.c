/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_dimension.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 04:05:47 by evild             #+#    #+#             */
/*   Updated: 2026/07/31 13:06:52 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"
#include <stdio.h>

void	ft_print_x_line(int x, int display)
{
	int	i;

	if (display == 1)
		ft_putchar('o');
	i = 0;
	while (i <= (x - 1))
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;
	int	k;

	j = 0;
	ft_print_x_line(x, 1);
	while (j <= (y - 1))
	{
		k = 0;
		ft_putchar('|');
		while (k <= (x - 1))
		{
			ft_putchar(' ');
			k++;
		}
		ft_putchar('|');
		ft_putchar('\n');
		j++;
	}
	ft_print_x_line(x, 1);
}
