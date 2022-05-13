# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:38:24 by tberube-          #+#    #+#              #
#    Updated: 2022/05/13 09:59:56 by tberube-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = push_swap.h

NAME = push_swap
SRCS = 	main.c parsing.c quit.c full_stack_a.c split_argv.c valid_check.c \
		call_rules1.c call_rules2.c call_rules3.c ft_free_long_tab_P_S.c test.c \
		double_call.c \

LIBFT_PATH = libft_push_swap/

OBJS = ${SRCS:.c=.o}

$(NAME):	$(OBJS)
	@make -C $(LIBFT_PATH) all
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)libft.a -o $(NAME)

.c.o:
	${CC} $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

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
