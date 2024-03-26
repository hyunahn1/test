/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:48:54 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/19 16:59:29 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (nb / i == i && nb % i == 0)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int i;
	int Seg_Fault;

	Seg_Fault = 100000000;
	i = 81;
//	while (++i != Seg_Fault)
	printf("%d: %d\n", i, ft_sqrt(i));
}

