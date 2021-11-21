CPPFLAGS = -Wall -Wextra -Werror -g3
CXX = clang++

NAME = bankster

SRCS = Account.cpp

OBJS_FOLDER = bin
OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = $(SRCS:.cpp=.hpp)

$(OBJS_FOLDER)/%.o: $(SRCS) $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) -r $(OBJS_FOLDER)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	clean fclean re
