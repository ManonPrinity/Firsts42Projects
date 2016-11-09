# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmanon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 05:30:52 by nmanon            #+#    #+#              #
#    Updated: 2016/11/05 05:30:55 by nmanon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

CC = 	gcc

FLG =	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(FLG) $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRC) includes/ft.h
