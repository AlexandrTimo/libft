/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:57:10 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/11 15:03:47 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static char     *ft_rev(char *str)
{
    int i;
    int len;
    char *rev;

    i = 0;
    len = ft_strlen(str);
    rev = (char *)malloc(sizeof(char) * len + 1);
    while (len > 0)
    {
        rev[i] = str[len - 1];
        i++;
        len--;
    }
    return (rev);
}

static char     *ft_number(char *str, int n, int z)
{
    int i;
    char *fstr;

    i = 0;
    while (i < z)
    {
        str[i] = n % 10 + '0';
        n = n/10;
        i++;
    }
    str[i] = '\0';
    fstr = ft_rev(str);
    free(str);
    return (fstr);    
}

static int     ft_int_size(int n)
{
    int count;
    
    count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char *str;
    char sign;
    int sign_len;
    int i;
    
    sign_len = 0;
    i = 0;
    if (n < 0)
    {
        sign = '-';
        sign_len++;
    }
    if (!(str = (char *)malloc(sizeof(char) * (ft_int_size(n) + sign_len) + 1)))
        return (NULL);
    return (ft_number(str, n, ft_int_size(n)));
}

int     main(void)
{
    printf ("%s\n", ft_itoa(-56));
    return (0);
}