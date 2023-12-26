NAME = exe
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp \

RM = rm -rf
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
