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

static char	*word_put(const char *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (j < i)
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
	str_count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (s[i] != c)
			str_count++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (str_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	**str_tab;

	if (!s)
		return (NULL);
	str_tab = malloc(sizeof(char *) * (str_count(s, c) + 1));
	if (!str_tab)
		return (NULL);
	str_tab[str_count(s, c)] = NULL;
	j = 0;
	i = 0;
	while (s[i] && str_count(s, c) != 0)
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (s[i] != c)
		{
			str_tab[j] = word_put(&s[i], c);
			j++;
		}
		while (s[i] != c && s[i + 1] != '\0')
			i++;
		i++;
	}
	return (str_tab);
}
