# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/01 19:48:02 by ablaamim          #+#    #+#              #
#    Updated: 2022/01/06 00:47:10 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCS_DIR	= ./includes

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

INCS		= -I$(INCS_DIR) -I$(LIBFT_DIR)
LFLAGS		= -L$(LIBFT_DIR) -lft
LIB			= ar -rcs
LIB1		= ranlib
RM			= /bin/rm -f

SRC_DIR		= ./srcs
SRCS		= $(SRC_DIR)/ft_conversion_types.c \
			$(SRC_DIR)/ft_type_char.c \
			$(SRC_DIR)/ft_type_digit.c \
			$(SRC_DIR)/ft_type_pointer.c \
			$(SRC_DIR)/ft_type_percent.c \
			$(SRC_DIR)/ft_type_str.c \
			$(SRC_DIR)/ft_type_ux.c \
			$(SRC_DIR)/ft_initializer.c \
			$(SRC_DIR)/ft_parsing.c \
			$(SRC_DIR)/ft_placeholders_manager.c \
			$(SRC_DIR)/ft_printf.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(LIBFT)
			$(LIB)	$(NAME) $(OBJS)
			$(LIB1) $(NAME)

.c.o: 		
			$(CC) $(CFLAGS) $(INCS) -c $< -o $(<:.c=.o)

$(LIBFT):
			make -C $(LIBFT_DIR)
			cp $(LIBFT) $(NAME)

bonus:		all

clean:
			make clean -C $(LIBFT_DIR)
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C $(LIBFT_DIR)
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re
