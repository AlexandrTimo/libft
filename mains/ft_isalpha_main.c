/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:51:22 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 10:55:26 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	int num = 102;
	printf("Mine ver - %d\n", ft_isalpha(num));
	printf("Origin ver - %d\n", isalpha(num));
	return (0);
}
