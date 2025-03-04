# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 11:26:44 by aszamora          #+#    #+#              #
#    Updated: 2025/02/25 11:20:20 by aszamora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZOMBIE

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRCS =	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp
		

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp 
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 