/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:20:10 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 16:20:13 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = ft_strlen(dst);
    size_t i;

    i = 0;
   while(i < ft_strlen(src) && i < size)
   {
    dst[dst_len + i] = src[i];
    i++;
   }
    dst[dst_len + i] = '\0';

   return ft_strlen(dst);
}
