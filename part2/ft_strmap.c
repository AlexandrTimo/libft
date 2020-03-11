/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:36:21 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 14:13:25 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strmap(char const *s,char(*f)(char))
{
    int i;
    int len;
    char *s2;

    i = 0;
    len = ft_strlen(s);
    s2 = (char *)malloc(sizeof(char) * len + 1);
    while (i < len)
    {
        s2[i] = f(s[i]);
        i++;
    }
    return (s2);
}

int     main(int argc, char **argv)
{
    if (argc == 1)
    printf("%s\n", ft_strmap(argv[1], ft_strdup(argv[1])));
    return (0);
}