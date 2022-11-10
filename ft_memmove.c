/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:43:04 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 11:43:08 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    long unsigned int i;
    const unsigned char *s = src;
    unsigned char tmp[sizeof(char)* n];
    unsigned char *d = dest;

    i = 0;
    while(i < n)
    {
        tmp[i] = s[i];
        i++;
    }

    i = 0;
    while (i < n)
    {
        d[i] = tmp[i];
        i++;
    }
    
    return dest;
}