/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:03:26 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/10 19:03:29 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    // if ((str1 + n) - str1) - ((str2 +n) - str2) > 0 
        //return 1
    
    // if < 0
        //return -1
    
    // if == 0
        //return 0
}

void main()
{
    printf("%i", strncmp("ABD", "ABE", 3)); 
}