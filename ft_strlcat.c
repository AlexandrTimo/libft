/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:20:31 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/26 20:53:55 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//size_t		strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

int		main(void)
{
	char str[50] = "lets buy";
	char *target;
	int len;
	
	target = "lamborghini";
	len = 5;
	
	printf("%s/n", strlcat(str, target, len));
	return(0);
}
