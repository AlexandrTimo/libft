/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 14:53:38 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 14:46:14 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void *len;

	len = (void *)malloc(size);
	if (len != NULL)
	{
		ft_bzero(len, size);
		return (len);
	}
	return (NULL);
}

int		main(void)
{
	printf("%s\n", ft_memalloc(10));
	return (0);
}
