/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:41:24 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 18:44:16 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multift.h"

int ft_iterative_factorial(int nb)
{
	int r;

	if (nb <= 0) return (0);
	r = nb;
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

int	ft_intcat(int n1, int n2)
{
	int	mult;

	mult = 10;
	while (n2 >= mult)
		mult *= 10;
	return (n1 * mult + n2);
}
