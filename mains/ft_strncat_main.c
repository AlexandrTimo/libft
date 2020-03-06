/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 15:16:27 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/26 15:16:58 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char str1[50] = "enjoy";
	char *str2;
	size_t count;

	str2 = "your meal";
	count = 6;
	printf("%s\n", ft_strncat(str1, str2, count));
	return(0);
}
