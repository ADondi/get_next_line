# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    make.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adondera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/14 15:13:32 by adondera          #+#    #+#              #
#    Updated: 2018/01/14 15:34:54 by adondera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make -C libft/ fclean && make -C libft/
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang -o tets_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
