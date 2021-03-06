/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:17:04 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/09 19:55:00 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	ft_memdel(void **ap)
{
	if (*ap && ap)	
	free(*ap);
	*ap = NULL;
}

int		main(void)
{
	void *str;

	str = "Hello";
	printf("%s\n", ft_memdel(&str));
	return (0);
}