/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:45:04 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 22:37:39 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../mylibc/multift.h"

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
