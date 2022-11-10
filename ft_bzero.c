/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:10:24 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 11:10:27 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void *ft_bzero(void *str, size_t n)
{    
    long unsigned int i;
    unsigned char *s = str;

    i = 0;
    while(i < n)
    {
        s[i] = 0;
        i++;
    }

    return s;
}