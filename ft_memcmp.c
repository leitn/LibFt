/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:01:55 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/12 03:01:59 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
     if (n == 0)
        return 0;
    while (n > 0 && ((char*)s1 == (char*)s2 && ((char*)s1)))
    {
        s1++;
        s2++;
        n--;
    }
    return ((char*)s1 - (char*)s2);
}