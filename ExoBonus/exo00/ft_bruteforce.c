/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bruteforce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:40:01 by evild             #+#    #+#             */
/*   Updated: 2026/07/30 22:42:50 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE
#include "../../mylibc/multift.h"
#include <unistd.h>

void	ft_bruteforce(char *str)
{
	char	actuelletter;
	char	words[100];
	t_uint	lastindex;

	lastindex = 0;
	while (*str)
	{
		actuelletter = ' ';
		while (*str != actuelletter)
		{
			if (actuelletter + 1 == 126)
				return ;
			actuelletter++;
			ft_putstr(words);
			ft_putchar(actuelletter);
			ft_putchar('\n');
			usleep(10000);
		}
		words[lastindex] = actuelletter;
		lastindex++;
		str++;
	}
}
