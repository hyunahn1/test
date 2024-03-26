/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:56:28 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/02 00:11:49 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*src;
	int	len;

	if (min >= max)
		return (0);
	len = max - min;
	src = (int *)malloc(len * sizeof(int));
	if (!(src))
		return (0);
	len = 0;
	while (max > min)
	{
		src[len] = min;
		min++;
		len++;
	}
	return (src);
}
