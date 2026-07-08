/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:55:23 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 22:38:43 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
