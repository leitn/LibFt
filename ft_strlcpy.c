/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:30:57 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 15:31:03 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    long unsigned int i;
    const unsigned char *s = src;
    unsigned char *d = dst;

    i = 0;
    while (i < size)
    {
        d[i] = s[i];
        i++;
    }
    
    return  ft_strlen(src);
}