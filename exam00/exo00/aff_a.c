/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 23:46:57 by evild             #+#    #+#             */
/*   Updated: 2026/07/31 00:20:01 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (**argv && **argv != 'a')
		(*argv)++;
	ft_putchar(**argv);
	ft_putchar('\n');
	return (0);
}
