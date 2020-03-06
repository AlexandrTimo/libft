/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 14:27:23 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 14:30:33 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <xlocale.h>

int		main(void)
{
	printf("mine ver - %c\n", ft_toupper('x'));
	printf("original ver - %c\n", toupper(120));
	return (0);
}
