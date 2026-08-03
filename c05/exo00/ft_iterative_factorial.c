/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:33:01 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 18:40:42 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

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
