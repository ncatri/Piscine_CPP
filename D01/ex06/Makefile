CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CXX = clang++

NAME = karenFilter

SRCS = Karen.cpp

OBJS_FOLDER = bin
OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = $(SRCS:.cpp=.hpp)

$(OBJS_FOLDER)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS) main.cpp
	$(CXX) $(CPPFLAGS) $(OBJS) main.cpp -o $(NAME)

test:
	echo sources: $(SRCS)
	echo objets: $(OBJS)
clean:
	$(RM) -r $(OBJS_FOLDER)

fclean: clean
	$(RM) $(NAME)
	$(RM) -r $(NAME).dSYM

re: fclean $(NAME)

.PHONY:	clean fclean re
