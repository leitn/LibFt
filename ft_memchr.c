/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letnitan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:14:10 by letnitan          #+#    #+#             */
/*   Updated: 2022/11/12 02:14:14 by letnitan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	size;

	if (n == 0)
		return (NULL);
	size = 0;
	while ((size < n) && ((char *)s))
	{
		if (*((char *)s + size) == (char )c)
			return ((void *)s + size);
		else
		{
			size++;
		}
	}
	return (NULL);
}
