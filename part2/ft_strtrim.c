/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:13:19 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/10 18:09:44 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s)
{
    int i;
    int j;
    int len;
    char *str;

    i = 0;
    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
        i++;
    len = ft_strlen(s);
    while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t' || s[len] = '\0')
        len--;
    if (i > len) //fix it 
        return (ft_strnew(0)); // check str
    str = (char *)malloc(sizeof(char) * (len - i) + 1);
    if (str == NULL)
        return (NULL);
        j = 0;
    while (i <= len)
    {
        str[j] = s[i]; 
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}

int     main(void)
{
    printf("%s\n", ft_strtrim("  Ibica and LA "));
    return (0);
}
