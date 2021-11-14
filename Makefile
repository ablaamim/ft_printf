# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 22:08:19 by ablaamim          #+#    #+#              #
#    Updated: 2021/11/14 22:36:10 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
