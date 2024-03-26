/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:30:22 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/31 16:20:42 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) != '\0')
			return (nb);
		nb++;
	}
	return (nb);
}

/*
#include <stdio.h>

int		main(void)
{
	int	a;

	a = 88;
	printf("%d\n", ft_find_next_prime(a));
}
*/
