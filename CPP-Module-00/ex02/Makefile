#PROGRAM NAME
NAME = account

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	srcs/Account.cpp \
		srcs/tests.cpp

OBJS = $(SRCS:.cpp=.o)

#HEADER
HEADER = -I ./include

#FLAGS
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 $(HEADER)

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
