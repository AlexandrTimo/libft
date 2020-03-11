/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:50:03 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 21:01:47 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int ft_strequ(char const *s1, char const *s2)
{
    unsigned char *str1;
    unsigned char *str2;
    int i;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[i])
            i++;
        else
            return (0);
    }
    return (1);
}

int     main()
{
    printf("%d\n", ft_strequ("mouse", "mouze"));
    return (0);
}