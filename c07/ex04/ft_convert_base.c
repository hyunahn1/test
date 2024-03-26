/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:19:17 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/02 23:18:17 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

char *ft_convert_base2(char *nbr, char *base_from, char *base_to);

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

int	reculsive(long long nbr, char *base, long long size)
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
		reculsive(nbr / size, base, size);
	c = base[a % size];
	//수정할 부분임.
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
		reculsive(nbr, base, i);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}
