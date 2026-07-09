/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 04:47:25 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/09 14:12:42 by e.diabriek       ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'Z' && str[i] >= 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 33 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
	}

	return (str);
}
