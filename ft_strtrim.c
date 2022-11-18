/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:37:18 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 09:37:26 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(const char c, const char *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	is_set_beginning(const char *s1, const char *set)
{
	unsigned int	i;

	i = 0;
	while (checkset(s1[i], set) == 1)
	{
		i++;
	}
	return (i);
}

static int	is_set_end(const char *s1, const char *set, unsigned int i)
{
	while (checkset(s1[i], set) == 1)
	{
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (is_set_beginning(s1, set) > 0)
		i = is_set_beginning(s1, set);
	if (is_set_end(s1, set, j) > 0)
		j = is_set_end(s1, set, j);
	return (ft_substr(s1, i, j - i));
}
