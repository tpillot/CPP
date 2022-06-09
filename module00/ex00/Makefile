# Name
NAME = megaphone

# Compiler
CXX = clang++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJS = megaphone.o

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS) : $(SRCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all