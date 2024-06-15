#PROGRAM NAME
NAME = animal

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	./srcs/Animal.cpp \
		./srcs/Cat.cpp \
		./srcs/Dog.cpp \
		./srcs/WrongAnimal.cpp \
		./srcs/WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)
MAIN = main.cpp

#FLAGS
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

#COMANDOS
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(MAIN) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
