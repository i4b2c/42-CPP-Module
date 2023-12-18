#PROGRAM NAME
NAME = megaphone

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

#FLAGS
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

#COMANDOS
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
