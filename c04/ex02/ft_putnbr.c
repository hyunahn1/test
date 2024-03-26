/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:32:15 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/04 11:28:47 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ahn(int nb)
{

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	nb += '0';
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb > -10)
	{
		ahn(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr (-nb);
	}
}

int main()
{
	ft_putnbr(42);
}
