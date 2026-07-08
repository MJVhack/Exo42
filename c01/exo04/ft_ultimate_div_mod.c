/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evil.diabriek <e.diabriek@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:21:14 by evil.diabri       #+#    #+#             */
/*   Updated: 2026/07/08 17:30:23 by evil.diabri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divtmp;
	int	modtmp;

	divtmp = *a / *b;
	modtmp = *a % *b;
	*a = divtmp;
	*b = modtmp;
}
