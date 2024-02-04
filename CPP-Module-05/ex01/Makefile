#PROGRAM NAME
NAME = Form

#PROGRAMMING LANGUAGE
CXX = c++

#ARQUIVOS
SRCS =	main.cpp \
		Bureaucrat.cpp \
		Form.cpp

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
