/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:28:14 by hyunahn           #+#    #+#             */
/*   Updated: 2024/03/24 10:57:04 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

int	ft_except(char *base)
{
	int	i;
	int	j;

	i = length(base);
	if (i == 1 || base[0] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	recursive(long long nbr, char *base, long long size)
{
	long long	a;
	int			c;

	if (nbr < 0)
	{
		a = nbr * -1;
	}
	else
		a = nbr;
	if (a >= size)
		recursive(nbr / size, base, size);
	c = base[a % size];
	ft_putchar(c);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = 0;
	if (!ft_except(base))
		return ;
	if (nbr < 0)
		ft_putchar('-');
	if (ft_except(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		recursive(nbr, base, i);
	}
}
