/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:20:31 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/02 21:01:00 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t sum;

	i = 0;
	j = ft_strlen(dst);

	if (ft_strlen(dst) > dstsize)
		sum = ft_strlen(src) + dstsize;
	else 
		sum = ft_strlen(src) + ft_strlen(dst);

	while (src[i] != '\0')
		{
			dst[i + j] = src[i];
			i++;
		}
		dst[i + j] = '\0';
		return (sum);
}

int		main(void)
{
	int len;
	char dst[12] = "123456";
	char *src;

	len = 11;	
	src = "7890";	
	//printf("Mine ver - %zu\n [%s]\n", ft_strlcat(dst, src, len), dst);
	printf("origin ver - %zu\n [%s]\n", strlcat(dst, src, len), dst);
	return (0);
}
