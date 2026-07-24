/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:23:21 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/07/12 02:30:22 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../mylibc/multift.h"

void	*ft_print_memory(void *addr, size_ull size)
{
	char 	*str;
	char	*tmp;
	int		i; 
	int		j; // Combien de fois ya de ligne
	int		k; // Gère l'affichage lettre par lettre
	int		l; // Censé gérer le 16 par 16 de str

	str = (char*)addr;
	ft_putnbr(((long long)addr));
	i = 0;
	j = size / 16;
	while (i <= j)
	{
		k = 0;
		while (k <= 16)
		{

			// Vz je laisse tomber			
			ft_putchar('\n');
			k++;
		}
	}

}
