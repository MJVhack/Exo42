/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 22:53:06 by evild             #+#    #+#             */
/*   Updated: 2026/07/26 20:44:31 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

t_uint	ft_size_charp_strlcat(char *ptr)
{
	t_uint	size_ptr;

	size_ptr = 0;
	while (*ptr)
	{
		ptr++;
		size_ptr++;
	}
	return (size_ptr);
}

t_uint	ft_strlcat(char *dest, char *src, t_uint size)
{
	char		*ptr;
	t_uint	size_dest;
	t_uint	size_src;
	t_uint	available_size;

	ptr = src;
	size_dest = 0;
	size_src = ft_size_charp_strlcat(ptr);
	while (*dest && size_dest < size)
	{
		dest++;
		size_dest++;
	}
	if (size_dest >= size)
		return (size + size_src);
	available_size = size - size_dest;
	while (*src && available_size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		available_size--;
	}
	*dest = '\0';
	return (size_dest + size_src);
}
