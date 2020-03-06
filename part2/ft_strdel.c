/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:45:09 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 19:08:27 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void    ft_strdel(char **as)
{
    if (*as && as)
    free(*as);
    *as = NULL;
}

int     main(void)
{
    printf("%s\n", ft_strdel(&str));
    return(0);
}