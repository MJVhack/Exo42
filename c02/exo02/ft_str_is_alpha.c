/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 20:07:00 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 20:30:36 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')))
		{
			return (0);
		}
	}
	return (1);
}
