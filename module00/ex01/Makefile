# Name
NAME = directory

# Compiler
CXX = clang++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -Werror

SRCS += main.cpp\
		Contact.class.cpp\
		Directory.class.cpp

OBJS = $(patsubst %.cpp,%.o,$(SRCS))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all