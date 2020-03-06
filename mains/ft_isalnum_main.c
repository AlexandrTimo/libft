/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:03:29 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 11:25:23 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	printf("Mine ver - %d\n", ft_isalnum('2'));
	printf("Orig ver - %d\n", isalnum('2'));
	return (0);
}
