# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 16:23:34 by dolvin17          #+#    #+#              #
#    Updated: 2024/11/22 18:14:18 by dolvin17         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \
		utils.c \
		handle_inputs.c \
		minilib.c \

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM_RF = rm -rf
NAME = philo

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM_RF) $(OBJS)

fclean:
	$(RM_RF) $(OBJS) $(NAME)

re: fclean all

.PHONY: clean fclean all re