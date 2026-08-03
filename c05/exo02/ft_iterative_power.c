/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:34:08 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 19:41:59 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

int ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (nb < 0) return (0);
	while (power > 0)
	{
		a = a * nb;
		power--;
	}
	return (a);
}
