CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3 -fsanitize=address
CXX = clang++

NAME = run

SRCS = Zombie.cpp

OBJS_FOLDER = bin
OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = Array.hpp Zombie.hpp

$(OBJS_FOLDER)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS) main.cpp
	$(CXX) $(CPPFLAGS) $(OBJS) main.cpp -o $(NAME)

test: $(OBJS) main_subject.cpp
	$(CXX) $(CPPFLAGS) $(OBJS) main_subject.cpp -o $(NAME)_test

clean:
	$(RM) -r $(OBJS_FOLDER)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME)_test
	$(RM) -r $(NAME).dSYM
	$(RM) -r $(NAME)_test.dSYM

re: fclean $(NAME)

.PHONY:	clean fclean re
