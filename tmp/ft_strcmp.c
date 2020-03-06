/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 10:01:08 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/23 10:12:42 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare strings
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main()
{
	int i;
	int *p;

	i = 5;
	p = (int*)malloc(sizeof(int));
	*p = 10;
	printf("%p\n", &ft_strcmp);
	printf("%p\n", &i);
	printf("%p\n", p);
	printf("%p\n", &(*p));	

	return (0);
}
