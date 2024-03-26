/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:54:12 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/02 03:50:07 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

int	ft_leng(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*src;

	if (size == 0)
	{
		src = (char *)malloc(1);
		src[0] = '\0';
		return (src);
	}
	src = malloc(sizeof(char) * ft_leng(strs, size, sep));
	if (!(src))
		return (0);
	*src = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(src, strs[i]);
		if (i < size -1)
			ft_strcat(src, sep);
		i++;
	}
	return (src);
}
