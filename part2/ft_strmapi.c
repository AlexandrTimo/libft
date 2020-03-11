/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 13:47:18 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/09 11:45:32 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strmapi(char  const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *s2;

    len = ft_strlen(s);
    s2 = (char *)malloc(sizeof(char) * len + 1);
    i = 0;
    while (i < len)
    {
        s2[i] = f(i, s[i]);
        i++;
    }
    return (s2);
}

int     main(int argc, char **argv)
{
    if (argc == 1)
    printf("%s\n", ft_strmapi(argv[1], &ft_strdup);
    return (0);
}