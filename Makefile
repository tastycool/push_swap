# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:38:24 by tberube-          #+#    #+#              #
#    Updated: 2022/05/04 09:36:27 by tberube-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = push_swap.h

NAME = push_swap
SRCS = main.c parsing.c quit.c

LIBFT_PATH = libft/

OBJS = ${SRCS:.c=.o}

$(NAME):	$(OBJS)
	@echo test3
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)libft.a -o $(NAME) 

.c.o:
	@echo test
	${CC} $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)
	@echo test2

all:	$(NAME)

debug:	CFLAGS += -g
debug:	$(NAME)

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFT_PATH)

fclean:		clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
