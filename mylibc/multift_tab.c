/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:41:40 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/08/01 12:06:35 by evild            ###   ########.fr       */
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
	int	i;
	int	r;

	i = 0;
	r = size - 1;
	while (i < (r / 2))
	{
		ft_swap(&tab[i], &tab[r]);
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
