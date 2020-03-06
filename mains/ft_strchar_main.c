/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:09:59 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/25 18:28:56 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main()
{
	char str[] = "HeAllo";

	printf("%s\n", ft_strchr(str, 'l'));
	//printf("%s\n", strchr(str, 'g'));

	return(0);
}
