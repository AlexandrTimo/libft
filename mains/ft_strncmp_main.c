/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 09:27:20 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/27 09:30:21 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *str1 = "fozrk";
	char *str2 = "foard";
	int count = 3;

	printf("Mine ver - %d\n", ft_strncmp(str1, str2, count));
	printf("Origin ver - %d\n", strncmp(str1, str2, count));
	return (0);
}
