CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CXX = clang++

NAME = run

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)


%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

test:
	echo sources: $(SRCS)
	echo objets: $(OBJS)

clean:
	$(RM) -r $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) -r $(NAME).dSYM

re: fclean $(NAME)

.PHONY:	clean fclean re
