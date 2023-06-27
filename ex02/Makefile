# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agengemb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 18:10:25 by agengemb          #+#    #+#              #
#    Updated: 2023/06/27 18:10:29 by agengemb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD
NAME = more_useful_classes
SRC= Fixed.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
DEP= ${OBJ:.o=.d}

all: $(NAME)

-include $(DEP)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re
