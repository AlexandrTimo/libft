/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:05:19 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 21:18:29 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] == str2[i])
        i++;
        else 
        return (0);
    }
    return (1);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    printf ("%d\n", ft_strnequ(argv[1], argv[2], 4));
    return (0);
}