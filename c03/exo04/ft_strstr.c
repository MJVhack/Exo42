/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 21:15:51 by evild             #+#    #+#             */
/*   Updated: 2026/07/24 23:09:59 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;
	char	*tmp2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tmp = str;
		tmp2 = to_find;
		while (*tmp && *tmp2 && *tmp == *tmp2)
		{
			tmp++;
			tmp2++;
		}
		if (!*tmp2)
			return (str);
		str++;
	}
	return (0);
}
