CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CXX = clang++

NAME = bankster

SRCS = Account.cpp

OBJS_FOLDER = bin
OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = $(SRCS:.cpp=.hpp)

$(OBJS_FOLDER)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS) tests.cpp
	$(CXX) $(CPPFLAGS) $(OBJS) tests.cpp -o $(NAME)

benchmark: $(NAME)
	./bankster | cut -d " " -f2 > my.log
	cat 19920104_091532.log | cut -d " " -f 2 > result.log
	diff my.log result.log


clean:
	$(RM) -r $(OBJS_FOLDER)

fclean: clean
	$(RM) $(NAME)
	$(RM) my.log
	$(RM) result.log

re: fclean $(NAME)

.PHONY:	clean fclean re
