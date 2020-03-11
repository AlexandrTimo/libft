/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:28:16 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 13:35:34 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void    ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, s + i);
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 1)
    printf ("%s\n", ft_striteri(argv[1], ft_memset(7, argv[1])));
    return (0);
}