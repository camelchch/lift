# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saxiao <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:44:51 by saxiao            #+#    #+#              #
#    Updated: 2017/11/08 12:10:38 by saxiao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -c -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memalloc.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_strcat.c\
		ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c\
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strlcat.c\
		ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c\
		ft_strncpy.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strstr.c\
		ft_tolower.c ft_toupper.c
OBJS = $(SRC:.c=.o)
INCLUDE = -I./includes
TARGET = libft.a

all:$(TARGET)

$(TARGET):$(OBJS)
	ar rc $(TARGET) $(OBJS)
	ranlib $(TARGET)

$(OBJS):$(SRC)
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(TARGET)

re:fclean all

