/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:23:10 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/17 20:26:35 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabtmp[size];
	int	i;
	int	r;

	i = 0;
	r = size - 1;
	while (i < size)
	{
		tabtmp[i] = tab[r];
		i++;
		r--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tabtmp[i];
		i++;
	}
}
