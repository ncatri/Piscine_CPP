CPPFLAGS = -Wall -Wextra -Werror -g3
CXX = clang++

NAME = phonebook

SRCS = Contact.cpp \
	   Phonebook.cpp

HEADERS = $(SRCS:.cpp=.hpp)

$(NAME): $(SRCS) $(HEADERS) main.cpp
	$(CXX) $(CPPFLAGS) $(SRCS) main.cpp -o $(NAME)

test:
	echo $(HEADERS)
	echo $(SRCS)

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	clean fclean
