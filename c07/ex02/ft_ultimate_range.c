/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:11:54 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/02 03:54:00 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int num;
	int i;
	int len;

	if (min >= max)
		return (0);
	len = max - min;
	*range = (int *)malloc((len) * sizeof(int));
	if (!(*range))
		return (0);
	i = 0;
	num = min;
	while (max > num)
	{
		*(*range + i) = num;
		i++;
		num++;
	}
	return (max - min);
}
