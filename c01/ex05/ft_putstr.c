/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 01:24:09 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/21 02:17:40 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ahn(char z)
{
	write(1, &z, 1);
}

void	ft_putstr(char *str)
{
	int	xyz;

	xyz = 0;
	while (str[xyz] != '\0')
	{
		ahn(str[xyz]);
		xyz++;
	}
}
