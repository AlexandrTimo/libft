/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memeset_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:42:02 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/27 10:36:33 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int		main()
{
	char str[] = "Hey, how are you?";
	ft_memset(str, '$', 3);
	printf("%s\n", str);

	return(0);
}
