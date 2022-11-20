# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:48:14 by tmiftah           #+#    #+#              #
#    Updated: 2022/11/16 11:15:14 by tmiftah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_point.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbrx.c ft_putstr.c \
	  ft_putunbr.c ft_putuphex.c

OBG = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBG)
	@ar rc $(NAME) $(OBG)

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $<

clean:
	@rm -rf $(OBG)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: fclean re clean all
