# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanpetrunin <ivanpetrunin@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 14:19:13 by ipetruni          #+#    #+#              #
#    Updated: 2024/04/21 18:18:20 by ivanpetruni      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SETUP OF THE PROGRAM

NAME =  MutantStack

# FILES AND PATH TO THEM

OBJ_DIR = obj/
SRC_DIR = src/

SRC	=	main

SRCS =  $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

# COMMANDS

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) was successfully created!$(DEFAULT)"
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -I./includes -c $< -o $@
	
clean:
		@$(RM) $(OBJS)
		@$(RM) $(OBJ_DIR)
		@echo "$(YELLOW)$(NAME) objects files deleted!$(DEFAULT)"
	
fclean: clean
		@$(RM) $(NAME)
		@echo "$(RED)$(NAME) program and objects deleted!$(DEFAULT)"

re:		fclean all

.PHONY: all clean fclean re

# COLORS DEFENITIONS

RED = \033[1;31m
DEFAULT = \033[0m
GREEN = \033[1;32m
BOLD = \033[1m
YELLOW = \033[1;33m