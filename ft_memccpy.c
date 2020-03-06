/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:29:24 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 15:32:56 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	unsigned char *ptr;
	unsigned char *ptrdst;
	ptr = (unsigned char *)src;
	ptrdst = (unsigned char *)dst;

	while (i < n)
	{
		ptrdst[i] = ptr[i];
		if (ptr[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
