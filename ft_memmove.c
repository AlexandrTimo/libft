/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:06:16 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 09:25:37 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *psrc;
	unsigned char *pdst;

	i = 0;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;

	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
