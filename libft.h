/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atimoshe <atimoshe@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:22:55 by atimoshe          #+#    #+#             */
/*   Updated: 2020/03/09 20:18:00 by atimoshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void		*ft_memset(void *b, int c, size_t len);
void 		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
char 		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
char 		*ft_strdup(const char *s1);
char 		*ft_strcpy(char *dst, const char *src);
char 		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *restrict s1, const char *restrict s2);
char 		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
int     	ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int		    ft_isalpha(int c);
int		    ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void        ft_putchar(char c);
void        ft_putstr(char const *s);
void        ft_putendl(char const *s);
void        ft_putnbr(int n);
void        ft_putchar_fd(char c, int fd);
void        ft_putstr_fd(char const *s, int fd);
void        ft_putendl_fd(char const *s,int fd);
void        ft_putnbr_fd(int n,int fd);
void        ft_strdel(char **as);
char        *ft_strnew(size_t size);
char        *ft_strtrim(char const *s);

#endif
