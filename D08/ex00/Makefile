CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g3 #-fsanitize=address
CXX = clang++

NAME = run

#SRCS = Base.cpp 

OBJS_FOLDER = bin
#OBJS = $(addprefix $(OBJS_FOLDER)/, $(SRCS:.cpp=.o))

HEADERS = easyfind.hpp

$(OBJS_FOLDER)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

$(NAME): $(HEADERS) main.cpp
	$(CXX) $(CPPFLAGS) main.cpp -o $(NAME)

test:
	echo sources: $(SRCS)
	echo objets: $(OBJS)
	echo headers: $(HEADERS)

clean:
	$(RM) -r $(OBJS_FOLDER)

fclean: clean
	$(RM) $(NAME)
	$(RM) -r $(NAME).dSYM

re: fclean $(NAME)

.PHONY:	clean fclean re
