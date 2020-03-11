/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:21:03 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/07 17:31:52 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned char *str;
    char *fr_str;
    size_t i;
    size_t j;

    str = (unsigned char *)s;
    fr_str = (char *)malloc(sizeof(char) * len + 1);
    if (fr_str == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        if (i == start)
        {
            j = 0;
            while (j < len)
            {
                fr_str[j] = str[i];
                j++;
                i++;
            }
            return (fr_str);
        }
        else 
        i++;
    }
    return (fr_str);
}

int     main(void)
{
    printf("%s\n", ft_strsub("start", 1, 4));
    return (0);
}