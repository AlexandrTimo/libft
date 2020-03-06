/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:42:41 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/21 19:32:15 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main()
{
	char str[] = "Hey, are you sure you wanna be a software engineer?";
		ft_bzero(str + 4, 3);
		printf("Mine version - %s\n", str);
		bzero(str + 4, 3);
		printf("Orig version - %s\n", str);

		return(0);
}
