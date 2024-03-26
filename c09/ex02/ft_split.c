/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 05:12:21 by hyunahn           #+#    #+#             */
/*   Updated: 2024/02/04 18:07:42 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separate(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_w(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (separate(str[i + 1], charset) == 1
			&& separate(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_w(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (separate(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_spl(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (separate(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (separate(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_w(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_w (str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	res[words] = 0;
	write_spl(res, str, charset);
	return (res);
}
