# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 14:17:42 by tberube-          #+#    #+#              #
#    Updated: 2022/05/03 14:05:59 by tberube-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = push_swap.h

NAME = push_swap
SRCS = main.c parsing.c quit.c

LIBFT_PATH = ./libft

OBJS = ${SRCS:.c=.o} 

.c.o:
	${CC} $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)
	

all: $(NAME)

debug: CFLAGS += -g
debug: $(NAME)

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re