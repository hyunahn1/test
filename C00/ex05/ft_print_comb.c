/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:36:19 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/23 15:25:22 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ahn(char x, char y, char z)
{
	while (z <= '9')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		if (!(x == '7' && y == '8' && z == '9'))
		{
			write(1, ", ", 2);
		}
		z++;
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			ahn(x, y, z);
			y++;
		}
		x++;
	}
}
