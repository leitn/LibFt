/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:30:20 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 11:30:24 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n)
{
    long unsigned int i;
    const unsigned char *s = (const unsigned char*)src;
    unsigned char *d = (unsigned char*)dest;

    i = 0;
    while(i < n)
    {
        *(d + i) = *(s + i);
        i++;
    }

    return dest;
}