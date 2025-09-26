NAME = ex01
TESTS = $(NAME)Tests

CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

MAIN_FILNAMES = main Animal Cat Dog WrongAnimal WrongCat Brain
TEST_FILENAMES = tests Animal Cat Dog WrongAnimal WrongCat Brain

SOURCES = $(addsuffix .cpp, $(MAIN_FILNAMES))
OBJECTS = $(addsuffix .o, $(MAIN_FILNAMES))

TEST_SOURCES = $(addsuffix .cpp, $(TEST_FILENAMES))
TEST_OBJECTS = $(addsuffix .o, $(TEST_FILENAMES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(CPP_FLAGS) $(OBJECTS) -o $(NAME)

tests: $(TESTS)

$(TESTS): $(TEST_OBJECTS)
	$(CPP) $(CPP_FLAGS) $(TEST_OBJECTS) -o $(TESTS)

%.o: %.cpp
	$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	rm -f $(TEST_OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTS)

re: fclean all

.PHONY: all tests clean fclean re
