/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 11:31:46 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/08 11:38:02 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void    ft_putstr_fd(char const *s, int fd)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    i++;
    write(fd, s, i);
}

int     main(void)
{
    ft_putstr_fd("TeslaS", 1);
    return (0);
}