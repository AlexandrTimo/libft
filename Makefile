# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atimoshe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/23 20:19:51 by atimoshe          #+#    #+#              #
#    Updated: 2020/02/23 21:46:00 by atimoshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror -I./
NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC)
		ar rcs $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all
