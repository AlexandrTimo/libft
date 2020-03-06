/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:12:20 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 20:06:16 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strnew(size_t size)
{
    char *c;

    c = (char *)malloc(size + 1);
    if (c != NULL)
    {
        ft_bzero(c, size);
        return (c);
    }
    return (NULL);
}

int     main(void)
{
    printf("%s\n", ft_strnew(10));
    return (0);
}
