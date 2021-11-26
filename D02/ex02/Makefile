CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CXX = clang++

NAME = fixed

SRCS = Fixed.cpp

OBJS_FOLDER = bin
OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = Fixed.hpp

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
