/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 22:53:06 by evild             #+#    #+#             */
/*   Updated: 2026/07/26 00:11:55 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../mylibc/multift.h"

size_uit	ft_size_charp_strlcat(char *ptr)
{
	size_uit	size_ptr;

	size_ptr = 0;
	while (*ptr)
	{
		ptr++;
		size_ptr++;
	}
	return (size_ptr);
}

size_uit	ft_strlcat(char *dest, char *src, size_uit size)
{
	char		*ptr;
	size_uit	size_dest;
	size_uit	size_src;
	size_uit	available_size;

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
