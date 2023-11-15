NAME = phonebook
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	srcs/contact.cpp \
		srcs/phonebook.cpp \

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) main.cpp -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
