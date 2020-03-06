/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:35:47 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/02 13:43:49 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *p_h;
   	char *p_n;

	p_h = (char *)haystack;
   	p_n = (char *)needle;	
	i = 0;
	//if (p_n[0] != '\0')
	//	return (p_h);
	while (i < len)
	{
		j = 0;
		if (p_h[i] == p_n[j])
		{
			while (p_n[j] != '\0')
			{
				if (p_h[i + j] != p_n[j])
					break ;
				j++;
			}	
			if (p_n[j] == '\0')
				return (&p_h[i]);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char str[] = "bvfcdhbcz";
	char h_str[] = "bcz";
	size_t len = 9;
	printf("mine ver - %s\n", ft_strnstr(str, h_str, len));
	printf("orig ver - %s\n", strnstr(str, h_str, len));
	return (0);
}
