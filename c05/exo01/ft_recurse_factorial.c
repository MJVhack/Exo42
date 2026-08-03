/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurse_factorial.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:00:22 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 19:28:15 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

int ft_recursive_factorial(int nb)
{
	if (nb == 0) return 1;
	return (nb * ft_recursive_factorial(nb - 1));
}
