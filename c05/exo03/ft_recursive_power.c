/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evild <e.diabriek@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:42:52 by evild             #+#    #+#             */
/*   Updated: 2026/08/03 19:53:26 by evild            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (nb < 0) return (0);
	if (power == 0) return (1);
	return (ft_recursive_power(nb, (power - 1)) * nb);
}
