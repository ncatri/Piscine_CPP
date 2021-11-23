CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CXX = clang++

NAME = replace

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	clean fclean re
