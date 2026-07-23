/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:57:35 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/07/09 18:17:24 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

unsigned int	ft_strlcpy(char *src, char *dest, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size <= 0)
	{
		return (j);
	}
	while (src[i] != '\0' || i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
