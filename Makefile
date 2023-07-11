# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcosta-f <fcosta-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/03 11:10:16 by fcosta-f          #+#    #+#              #
#    Updated: 2023/07/11 18:39:42 by fcosta-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_printf.c ft_hexa_lower.c ft_hexa_upper.c ft_print_pointer.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_unsigned.c

OBJS			= $(SRCS:.c=.o)

DEPS = $(OBJS:.o=.d)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
CPPFLAGS		= -MMD

NAME			= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

-include $(DEPS)


clean:
	$(RM) $(OBJS) $(BONUS_OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re