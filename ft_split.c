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
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = -1;
	while (s[++i])
	{
		if (s[i] == c)
			break ;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (++j < i)
		str[j] = s[j];
	return (str);
}

static unsigned int	str_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	str_count;

	i = -1;
	str_count = 0;
	while (s[++i])
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (s[i] != c)
			str_count++;
		while (s[i] != c && s[i + 1])
			i++;
	}
	return (str_count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	j;
	unsigned int	i;
	char			**str_tab;

	if (!s)
		return (NULL);
	str_tab = malloc(sizeof(char *) * (str_count(s, c) + 1));
	if (!str_tab)
		return (NULL);
	str_tab[str_count(s, c)] = NULL;
	j = -1;
	i = -1;
	while (s[++i] && str_count(s, c) != 0)
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		if (s[i] != c)
			str_tab[++j] = word_put(&s[i], c);
		while (s[i] != c && s[i + 1] != '\0')
			i++;
	}
	return (str_tab);
}
