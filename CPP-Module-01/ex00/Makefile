NAME = exe
CC = g++
FLAGS = -Wall -Werror -Wextra
SRCS =	main.cpp \
		srcs/newZombie.cpp \
		srcs/randomChump.cpp \
		srcs/Zombie.cpp \

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
