/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:12:33 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/01 15:08:06 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *p;

	i = 0;
	p = (char *)s;

	while (p[i] != '\0')
	{
		i++;
	}
	while (p[i] != c)
	{
		i--;
		if (p[i] == c)
		return (p + i);
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "Winner";
	int chr = 'n';
	printf("Orig ver - %s\n", strrchr(str, chr));
	printf("Mine ver - %s\n", ft_strrchr(str, chr));
	return(0);
}
