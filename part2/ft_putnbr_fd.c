/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:42:42 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/09 13:45:34 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
        n = -n;
        ft_putchar('-');
    }
    if (n < 10 && n >= 0)
        ft_putchar(n + '0');
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}

int     main(void)
{
    ft_putnbr_fd(656, 1);
    return (0);
}