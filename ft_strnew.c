/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:12:20 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/09 20:24:52 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char *c;

    c = (char *)malloc(sizeof(char) * size + 1);
    if (c != NULL)
    {
        ft_bzero(c, size + 1);
        return (c);
    }
    return (NULL);
}