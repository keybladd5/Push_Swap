# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:polmarti <polmarti@student.42barcel>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/03 15:07:25 by polmarti          #+#    #+#              #
#    Updated: 2023/12/03 15:15:14 by polmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =  utils/free_error.c src/push.c src/rev_rotate.c src/rotate.c src/swap.c src/init_stack.c \
        utils/lst_utils.c src/push_swap.c utils/sort_nodes.c src/main.c

INCLUDES = push_swap.h

FLAGS = -Wall -Wextra -Werror -MMD

OBJS = $(SRCS:.c=.o)

DEPS = $(SRCS:.c=.d)

all: $(NAME)

CC = gcc

%.o:%.c Makefile
	$(CC) $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $^
clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
