# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 21:51:07 by bepifani          #+#    #+#              #
#    Updated: 2022/06/22 18:59:54 by bepifani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myphonebook
GCC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp phonebook.cpp contact.cpp

HEADER = phonebook.hpp contact.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) Makefile
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re