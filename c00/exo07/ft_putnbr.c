/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:44:49 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 23:13:12 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../mylibc/multift.h"

void	ft_putnbr(int integer)
{
	if (integer < 0)
	{
		ft_putchar('-');
		integer = -integer;
	}
	if (integer >= 10)
	{
		ft_putnbr(integer / 10);
	}
	ft_putchar((integer % 10) + '0');
}
