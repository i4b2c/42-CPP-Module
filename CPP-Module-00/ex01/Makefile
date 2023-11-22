NAME = phonebook
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	srcs/contact.cpp \
		srcs/phonebook.cpp \
		main.cpp \

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all
