NAME = exe
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp \

RM = rm -r
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
