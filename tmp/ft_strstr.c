/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:06:38 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/23 14:53:42 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int len; 

	i = 0;
	len = strlen(needle);
	
	if (*needle == '\0')
		return((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[j + i] == needle[j])
				j++;
			else
				break;
			if (needle[j] == '\0')
				return ((char *)haystack);
		}
	}
	return(NULL);
}

int 	main()
{
	 char *str = "hello world";
	 char *sm_str = "lo";

	 printf("%s\n", ft_strstr(str, sm_str));

	 return(0);
}
