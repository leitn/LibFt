/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:35:14 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 16:35:18 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	nombre(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	conversion(char *str, int i, int res)
{
	if (nombre(str[i]) == 1)
	{
		res = res * 10 + (str[i] - '0');
		return (res);
	}
	else
		return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && nombre(str[i]) != 0)
	{
		res = conversion(str, i, res);
		i++;
	}
	return (res * sign);
}
