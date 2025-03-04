# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/25 11:38:10 by aszamora          #+#    #+#              #
#    Updated: 2025/02/25 12:21:12 by aszamora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = armory

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRCS =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

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