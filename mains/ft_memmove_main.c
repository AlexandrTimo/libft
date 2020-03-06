/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:23:21 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 09:32:35 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char str[] = "fast";
   	char dest[] = "driver";
	size_t lenta = 4;
	printf("mine ver - %s\n", ft_memmove(dest, str, lenta));
	printf("orig ver - %s\n", memmove(dest, str, lenta));
	return (0);
}
