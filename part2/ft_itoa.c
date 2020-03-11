/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 20:57:10 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/11 16:19:17 by atimoshe         ###   ########.fr       */
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
    if (n < 0)
    {
        n = n * - 1;
        count++;
    }
    if (n == 0)
        count++;
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
    int i;
    int j;
    
    j = 0;
    i = ft_int_size(n);
    if (!(str = (char *)malloc(sizeof(char) * i + 1)))
        return (NULL);
    str[i] = '\0';
    if (n == 0)
        str[j] = '0';
    if (n < 0)
    {
        str[j] = '-';
        n = n * -1;
        j++;
    }
    if (n > 0)
    {
        
        &str[j] = ft_number(str, n, ft_int_size(n));
        return (str);
    }
    else
        return (0);
}

int     main(void)
{
    printf ("%s\n", ft_itoa(-1));
    return (0);
}