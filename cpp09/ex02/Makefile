# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 17:25:51 by bepifani          #+#    #+#              #
#    Updated: 2023/04/29 19:43:44 by bepifani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
GCC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = PmergeMe.cpp SortList.cpp SortVec.cpp

HEADER = PmergeMe.hpp

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