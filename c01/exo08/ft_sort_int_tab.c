/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:38:43 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 19:11:27 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= size)
	{
		b = 0;
		while (b <= size)
		{
			if (tab[a] < tab[b])
			{
				ft_swap(&tab[a], &tab[b]);
			}
			b++;
		}
		a++;
	}
}
