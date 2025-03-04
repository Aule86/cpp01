# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aszamora <aszamora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 10:13:37 by aszamora          #+#    #+#              #
#    Updated: 2025/02/27 10:14:02 by aszamora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRCS =	main.cpp 

		
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