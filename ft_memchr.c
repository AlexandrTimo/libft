/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:35:15 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 16:51:16 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ps;

	i = 0;
	ps = (unsigned char *)s;
	while (i < n)
	{
		if (ps[i] == (unsigned char) c)
		return (ps + i);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char str[] = "Holycopter";
	char chr = 'p';
	size_t len = 10;

	printf("orig ver - %s\n", memchr(str, chr, len));
	printf("mine ver - %s\n", ft_memchr(str, chr, len));
	return (0);
}
