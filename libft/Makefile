# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 19:39:18 by ablaamim          #+#    #+#              #
#    Updated: 2022/01/05 02:08:42 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# 	* CREATE A MAKEFILE TO COMPILATE OUR LIB * #

# 	* generate a file type .a ~file responsible for creating our lib
NAME = libft.a
# 	* command to compile our functions
CFLAGS	= -Wall -Werror -Wextra
CC	= gcc
# 	* functions that must be compiled through our makefile
SRCS    = ft_append_char.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \

# 	* create our executable file
# 	* replace all files with .c extension to .o extension
OBJS 	= $(SRCS:%.c=%.o)

# 	* "rules" for our makefile to run
all:	$(NAME)

$(NAME):	$(OBJS)
# 	* ar ~create our file
# 	* -r ~"read" adds or modifies an already created file
# 	* -c ~suppress air message in terminal
#	* -s ~"refresh explorer"
	ar -rcs $(NAME) $(OBJS)

# 	* forcibly delete all .o files created by our makefile
clean:
	rm -rf $(OBJS)

# 	* force delete all created .o files and created .a file
fclean: clean
	rm -f $(NAME)

# 	* force delete all created .o files and created .a file and then recompile my files
re:	fclean all

# 	* prevent our program from crashing if there is any folder or \
file with the name of one of our "rules"
.PHONY:	all clean fclean re
