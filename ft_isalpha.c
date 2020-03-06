/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:44:38 by atimoshe          #+#    #+#             */
/*   Updated: 2020/02/29 10:55:31 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
