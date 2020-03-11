/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:20:26 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/06 14:30:51 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void    ft_striter(char *s, void (*f)(char *))
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        f(s + i);
        i++;     
    }
}

int     main(int argc, char **argv)
{
    unsigned char *str; 
    if (argc == 2)
    str = (char *)ft_striter("string", ft_strclr("string"));
    printf("%s\n", str);
        return (0);
}