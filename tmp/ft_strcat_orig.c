/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:34:02 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/26 14:12:38 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char 	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i,j;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while(p1[i] != '\0')
	{
		if (p1[i + 1] == '\0')
		{	
			i++;
			j = 0;
			while(p2[j] != '\0')
			{
				p1[i + j] = p2[j];
				j++;
			}
			p1[i + j] = '\0';
			return (p1);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char str1[50] = "good";
	char str2[] = "morning";
	printf("%s\n", ft_strcat(str1, str2));

	return (0);
}
