/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:40:51 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/08 11:44:53 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void    ft_putendl_fd(char const *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    i++;
    write(fd, s, i);
    write(1, "\n", 1);
}

int     main(void)
{
    ft_putendl_fd("Ultra festival", 1);
    return (0);
}