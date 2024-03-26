/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:03 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/26 21:05:47 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = ft_strlen(dest);
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < 1)
		return (src_len + size);
	while (src[j] && dest_len + j + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dest_len < size)
		return (src_len + dest_len);
	else
		return (src_len + size);
}
