/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:26:03 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/26 09:32:06 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	*str;
	char	dest[50];
	int		count;

	str = "firefighter";
	count = 4;
	printf("%s\n", ft_strncpy(dest, str, count));
	return (0);
}
