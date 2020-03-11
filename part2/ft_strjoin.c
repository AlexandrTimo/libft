/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 09:31:02 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 11:35:23 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str1;
    char *str2;
    char *str3;
    size_t i;
    size_t j;
    size_t len3;

    str1 = (char *)s1;
    str2 = (char *)s2;
    len3 = ft_strlen(str1) + ft_strlen(str2);
    i = 0;

    str3 = (char *)malloc(sizeof(char) * (len3) + 1);
    if (str3 == NULL)
        return (NULL);
    while (i < len3)
    {
        if (str1[i] == '\0')
        {   
            j = 0;
            while (str2[j] != '\0')
            {
                str3[i] = str2[j];
                j++;
                i++;
            }
        }
        else 
        {
            str3[i] = str1[i];
            i++;
        }
    }
    str3[i] = '\0';
    return (str3);
}

int     main(void)
{
    char *str1 = "good";
    char *str2 = "luck";
    printf ("%s\n", ft_strjoin(str1, str2));
    return (0);
}