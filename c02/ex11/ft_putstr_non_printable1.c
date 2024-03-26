/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable1.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:10:26 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/26 13:05:33 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	sixteen(unsigned char j)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (j > 15)
	{
		sixteen(j / 16);
		sixteen(j % 16);
	}
	else
		ft_putchar(hex[j]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
		{
			ft_putchar('\\');
			if ((unsigned char)str[i] < 16)
				ft_putchar('0');
			sixteen((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
