# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkozlov <vkozlov@student.unit.ua>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/21 13:49:03 by vkozlov           #+#    #+#              #
#    Updated: 2018/03/01 14:23:54 by vkozlov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

NAME = libJSON.a

DIR_S = src

DIR_O = obj

HEADER = include

SOURCES = json.c

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: obj $(NAME)

$(NAME): $(OBJS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)

obj:
		@mkdir -p obj

$(DIR_O)/%.o: $(DIR_S)/%.c
		@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

clean:
		@rm -f $(OBJS)
		@rm -rf $(DIR_O)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all obj clean fclean re
.NOTPARALLEL: all obj clean fclean re
