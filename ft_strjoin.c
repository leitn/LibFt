/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:00:43 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/16 19:00:53 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	size_t				lentotal;
	long unsigned int	i;
	long unsigned int	j;

	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal + 1));
	if (str == 0 || (!s1 && !s2))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] && i <= ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && j <= ft_strlen(s2))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[lentotal] = '\0';
	return (str);
}
