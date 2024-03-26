/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunahn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:57:53 by hyunahn           #+#    #+#             */
/*   Updated: 2024/01/28 16:56:35 by hyunahn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	except;
	int	denary;
	int	i;

	except = 1;
	i = 0;
	denary = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			except *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		denary *= 10;
		denary += str[i] - 48;
		i++;
	}
	return (denary * except);
}
