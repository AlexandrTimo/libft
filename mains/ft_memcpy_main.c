/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:17:12 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/21 19:24:12 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main()
{
	char src[] = "BASKETball";
	char dst[14] = "basketBALL";
	char src_test[] = "BASKETball";
	char dst_test[14] = "basketBALL";

		ft_memcpy(dst_test, src_test, 6);
		printf("Mine version - %s\n", dst_test);
		memcpy(dst, src, 6);
		printf("Orig version - %s\n", dst);

		return(0);
}
