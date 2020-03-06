/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 15:22:18 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 15:32:52 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char dest[] =  "sdafsdagge";
	char str[] = "pilov";
	size_t i = 5;
	int c = 'o';
	printf("Mine ver - %s\n", ft_memccpy(dest, str, c, i));
	printf("Origin ver - [%s]\n", memccpy(dest, str, c, i));
	printf("[%s]\n", dest);
	return (0);
}
