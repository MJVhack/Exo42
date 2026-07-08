/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 04:47:25 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 20:35:48 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multift.h"
#include <unistd.h>

//-------------------------------------------------
// FT: Put                                        |
//-------------------------------------------------
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putstr(char *str)
{
	int	i;

	i= 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//------------------------------------------------------
// FT: Tableaux                                        |
//------------------------------------------------------

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int tabtmp[size];
	int i;
	int r;

	i = 0;
	r = size;
	while (i <= size)
	{
		tabtmp[i] = tab[r];
		i++;
		r--;
	}
	i = 0;
	while (i <= size)
	{
		tab[i] = tabtmp[i];
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= size)
	{
		b = 0;
		while (b <= size)
		{
			if (tab[a] < tab[b])
			{
				ft_swap(&tab[a], &tab[b]);
			}
			b++;
		}
		a++;
	}
}

//-------------------------------------------------
// FT: Str                                        |
//-------------------------------------------------

void	ft_strcpy(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

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
