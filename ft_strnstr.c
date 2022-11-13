/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 11:09:35 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/13 11:09:38 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (i < len && big[i] != '\0')
    {
        j = 0;
            while (i < len && big[i + j] == little[j])
            {
                j++;
                if (little[j] == '\0')
                    return ((char*)big + i);
            }
        i++;
    }
    return (NULL);
}
