/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 19:44:54 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 19:50:37 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

void	ft_strncpy(char *src, char *dest, int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
