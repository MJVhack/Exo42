/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:41:40 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/07/10 14:42:04 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multift.h"
#include <unistd.h>

//------------------------------------------------------
// FT: Tableaux                                        |
//------------------------------------------------------

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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
