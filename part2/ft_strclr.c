/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:12:32 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/05 19:19:01 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.c"
#include <stdio.h>

void ft_strclr(char *s)
{
    size_t len;

    len = ft_strlen(s);
    ft_bzero(s, len);
}

int     main(void)
{
    printf("%s\n", ft_strclr("New York"));
    return (0);
}