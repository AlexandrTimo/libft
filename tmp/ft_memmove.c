/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:06:17 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/21 23:04:50 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	char *srcc;
	char *dstc;
	
	i = 0;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc == NULL && dstc == NULL)
		return (NULL);
	if (srcc < dstc)
		while ((int)(--n) >= 0)
			*(dstc + n) = *(srcc + n);
	else
		while (i < n)
		{
			*(dstc + i) = *(srcc + i);
			i++;
		}
	return (dst);
}

int		main()
{
	char str_test[] = "Home";
	char dst_test[] = "Lalaland";
	char str[] = "Home";
	char dst[] = "Lalaland";

	ft_memmove(dst_test, str_test, 4);
	printf("Mine verion - %s\n", dst_test);
	memmove(dst, str, 4);
	printf("Origin version - %s\n", dst);

	return (0);
}
