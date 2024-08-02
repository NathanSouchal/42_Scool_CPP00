# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 09:14:12 by nsouchal          #+#    #+#              #
#    Updated: 2024/07/12 11:50:41 by nsouchal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC_FILE =	main.cpp \


DIR_BUILD		=	.build/
DIR_SRCS 		= 	srcs/
DIR_HEADERS		=	includes/

OBJS			=	$(patsubst %.cpp, $(DIR_BUILD)%.o, $(SRCS))
SRCS			=	$(addprefix $(DIR_SRCS),$(SRC_FILE))

FLAGS		=	-Wall -Werror -Wextra -std=c++98

CC = c++

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
			$(CC) $(OBJS) -o $(NAME)

$(DIR_BUILD)%.o: %.cpp Makefile
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(DIR_BUILD)

.PHONY: fclean
fclean: clean
		rm -rf $(NAME)

.PHONY: re
re: fclean
	$(MAKE) all
