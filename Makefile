# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adondera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 13:20:56 by adondera          #+#    #+#              #
#    Updated: 2018/02/24 13:42:21 by adondera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get.exe

SRCS = *.c

OBJ = *.o

#INC = includes/

#FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(FLAGS) -c $(SRCS)
	@gcc $(OBJ) -L libft/ -lft -o $(NAME)

clean:
	@make -C libft/ fclean
	@rm -f $(OBJ)

fclean:
	@make -C libft/ fclean
	@rm -f $(NAME)
	
re: fclean
	@make -C libft
	@gcc $(FLAGS) -c $(SRCS)
	@gcc $(OBJ) -L libft/ -lft -o $(NAME)
