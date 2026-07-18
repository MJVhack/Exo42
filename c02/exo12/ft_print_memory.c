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

void	*ft_print_memory(void *addr, unsigned int size)
{
	char 	*str;
	int		i;
	char	*tmp;

	str = (char*)addr;
	ft_putnbr(((long long)addr));
	i = 0;
	while (str[i] != '\0')
	{
		tmp;

		i++;
	}

}
