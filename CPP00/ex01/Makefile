NAME			=	phonebook
CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC				=	main.cpp \
					contact.cpp \
					phonebook.cpp \


OBJS			=	$(SRC: .cc=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		@$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.POHNY: fclean clean re all
