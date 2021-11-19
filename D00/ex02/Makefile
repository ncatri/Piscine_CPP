CPPFLAGS = -Wall -Wextra -Werror -g3
CXX = clang++

NAME = bankster

SRCS = Account.cpp \

HEADERS = $(SRCS:.cpp=.hpp)

$(NAME): $(SRCS) $(HEADERS)
	$(CXX) $(CPPFLAGS) -c $(SRCS) 

test:
	echo $(HEADERS)
	echo $(SRCS)

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	clean fclean
