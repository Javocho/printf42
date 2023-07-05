# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f <fcosta-f@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 11:10:16 by fcosta-f          #+#    #+#              #
#    Updated: 2023/07/04 00:03:40 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJS    = $(SRCS:.c=.o)

CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror -I.

NAME    = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
