/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:45:31 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/21 19:24:00 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int i;

	i = -1;
	if (dst == NULL && src == NULL && n)
		return(NULL);
	while (++i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
		return(dst);
}
