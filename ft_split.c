/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:37:24 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/18 17:37:28 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*word_put(const char *s, unsigned int x)
{
	char	*str;
	size_t	j;

	str = (char *)malloc(sizeof(char) * (x + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < x)
	{
		str[j] = s[j];
		j++;
	}
	return (str);
}

static size_t	str_count(char const *s, char c)
{
	size_t	i;
	size_t	str_count;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			str_count++;
		i++;
	}
	str_count = str_count + 1;
	return (str_count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	x;
	char			**str_tab;

	str_tab = (char **)malloc(sizeof(char *) * str_count(s, c));
	if (!str_tab)
		return (NULL);
	i = 0;
	x = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str_tab[j] = word_put(s, x);
			j++;
			x = -1;
		}
		i++;
		x++;
	}
	str_tab[j] = word_put(s, x);
	str_tab[j + 1] = '\0';
	return (str_tab);
}
