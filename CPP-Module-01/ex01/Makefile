#PROGRAM NAME
NAME = brainzz

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	Zombie.cpp \
		zombieHorde.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

#FLAGS
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

#COMANDOS
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
