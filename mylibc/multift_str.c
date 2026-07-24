/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multift_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:42:18 by e.diabriek        #+#    #+#             */
/*   Updated: 2026/07/24 21:05:27 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "multift.h"
#include <unistd.h>

//-------------------------------------------------
// FT: Str                                        |
//-------------------------------------------------

void	ft_strcpy(char *src, char *dest)
{
	int	i;

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] <= 'z' && str[0] >= 'a')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

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

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_print_hex(str[i] / 16);
			ft_print_hex(str[i] % 16);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}


void	ft_print_hex(char c)
{
	if (c <= 9)
	{
		ft_putchar(c + '0');
	}
	else
	{
		ft_putchar((c % 10) + 'A');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	ft_strncmp(char *s1, char *s2, size_uit n)
{
	if (n == 0) return(0);
	while (*s1 == *s2 && n > 1)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
