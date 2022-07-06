# Name
NAME = sed

# Compiler
CXX = clang++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -Werror

SRCS += main.cpp

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