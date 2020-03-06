/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:30:55 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 14:34:04 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int		main(void)
{
	printf("mine ver - %c\n", ft_tolower('K'));
	printf("orig ver - %c\n", tolower(75));
	return (0);
}
