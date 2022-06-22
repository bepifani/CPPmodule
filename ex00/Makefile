# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 21:34:30 by bepifani          #+#    #+#              #
#    Updated: 2022/06/20 21:37:21 by bepifani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
GCC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re