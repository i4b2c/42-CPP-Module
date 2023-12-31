#PROGRAM NAME
NAME = fixed

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	srcs/main.cpp \
		srcs/Fixed.cpp \
		srcs/Point.cpp \
		srcs/bsp.cpp

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
