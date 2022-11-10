/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:55:54 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 18:55:57 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

size_t	ft_strlen (const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *strchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);

    while (s[i]!= '\0')
    {
        if (s[i] == c)
        {
            return ((char *)s);
        }
        i--;
    }
    
    return NULL;
}
