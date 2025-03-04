# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 11:54:40 by aszamora          #+#    #+#              #
#    Updated: 2025/03/04 11:54:42 by aszamora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

#CC = c++
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRCS =	main.cpp \
		Harl.cpp 
		

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