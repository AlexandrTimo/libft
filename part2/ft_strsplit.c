/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:23:24 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/10 20:49:05 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static int    ft_skip_to_len(char *s, char c)
{
    int i;
    int count_words;

    i = 0;
    count_words = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] == '\0')
            return (count_words);
        while (s[i] != c && s[i] != '\0')
            i++;    
        count_words++;
    }
    return (count_words); 
}

char    **ft_strsplit(char const *s, char c)
{
    char **arr;
    char *word; 
    int i;
    int j;
    int p;
    int z;
    int a;

    i = 0;
    j = 0;
    p = 0;
    z = 0;
    a = 0;

    if (!(arr = (char **)malloc(sizeof(char *) * ft_skip_to_len((char *)s, c))))
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        p = i;
        while (s[i] != c && s[i] != '\0')
        {
            i++;
            j++;
        }
        if (!(word = (char *)malloc(sizeof(char ) * (j + 1))))
            return (NULL);
        while (z < j)
        {
            word[z] = s[p];
            z++;
            p++; 
        }
        word[z] = '\0';
        z = 0;
        j = 0;
        arr[a] = word;
        a++;
    }
    return (arr);
}

int     main(void)
{
    char str[] = ""; 
    char symb = '*';
    char **array;
    int i = 0;
    array = ft_strsplit(str, symb);
    while (i < 3)
    {
        printf("%s\n", array[i]);
        i++;
    }
    return (0);
}