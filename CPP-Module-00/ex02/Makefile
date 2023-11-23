NAME = exe
CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = srcs/tests.cpp\
       srcs/Account.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all
