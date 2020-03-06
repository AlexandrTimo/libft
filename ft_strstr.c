/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:09:11 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/02 10:41:37 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	char *p_h;
	char *p_n;

	i = 0;
	p_h = (char *)haystack;
	p_n = (char *)needle;
	if (p_n[0] == '\0')
		return (p_h);
	while (p_h[i] != '\0')
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
	char str[] = "abcdebcz";
	char h_str[] = "bcz";
	printf("Mine ver - %s\n", ft_strstr(str, h_str));
	printf("Orig ver - %s\n", strstr(str, h_str));
	return (0);
}
