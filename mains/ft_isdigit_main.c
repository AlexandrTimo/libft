/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:56:22 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 11:02:20 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	printf("Mine ver - %d\n", ft_isdigit('5'));
	printf("Orig ver - %d\n", isdigit('5'));
	return (0);
}
