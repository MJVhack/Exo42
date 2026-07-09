/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e.diabriek <e.diabriek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:17:44 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/09 18:05:06 by e.diabriek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char a, char b, char c, char d)
{
	// Que vous le sachiez, cette fonctio s'appeler 'nktmr42' et c'était assumé
	// oui oui les 2 s'appelaient comme ca...
	char	dot;

	dot = '.';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '9' && c == '9' && d == '9')
	{
		write(1, &dot, 1);
		write(1, "\n", 1);
		return ;
	}
	write(1, ", ", 2);
	return ;
}

void	ft_mainwhile(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print_result(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = '0';
		}
		a++;
		b = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	immonde;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	mainwhile(a, b, c, d);
}
