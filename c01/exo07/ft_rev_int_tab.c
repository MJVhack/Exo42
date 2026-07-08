/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:23:10 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 19:24:46 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	tabtmp[size];
	int	i;
	int	r;

	i = 0;
	r = size;
	while (i <= size)
	{
		tabtmp[i] = tab[r];
		i++;
		r--;
	}
	i = 0;
	while (i <= size)
	{
		tab[i] = tabtmp[i];
		i++;
	}
}
