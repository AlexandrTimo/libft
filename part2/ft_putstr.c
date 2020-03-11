/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:31:26 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/07 21:41:17 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void ft_putstr(char const *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    write(1, s, i);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    ft_putstr(argv[1]);
    return (0);
}