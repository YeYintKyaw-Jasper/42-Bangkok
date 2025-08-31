# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yekyaw <yekyaw@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 13:34:15 by yekyaw            #+#    #+#              #
#    Updated: 2025/08/31 16:45:57 by yekyaw           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
        ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
        ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
        ft_strstrcmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

SRC = ${PART1}

OBJS = ${SRC:.c=.o}

CC = gcc
RM = rm -fr
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I.

%.o:%.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME}

all: ${NAME}

clean:
    ${RM} ${OBJS}

fclean:
    S{RM} ${NAME}

re: fclean all

.PHONY:all clean fclean re