/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:33:56 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/07 21:23:04 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void ft_putendl(char const *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    write(1, s, i);
    write(1, "\n", 1);
}

int     main(void)
{
    ft_putendl("String");
    return (0);
}