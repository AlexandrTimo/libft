/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:51:36 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 17:33:28 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ps1;
	unsigned char *ps2;	

	i = 0;
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;

	while (i < n)
	{
		if (ps1[i] == ps2[i])
			i++;
		return (ps1[i] - ps2[i]);
	}
	return (0);
}

int		main(void)
{
	char str1[] = "g";
	char str2[] = "gg";
	size_t len = 2;

	printf("Orig ver - %d\n", memcmp(str1, str2, len));
	printf("Mine ver - %d\n", ft_memcmp(str1, str2, len));
	return (0);
}
