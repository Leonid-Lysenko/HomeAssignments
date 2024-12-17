W = -g -Wall -Werror -Wpedantic
G = g++
A = Assignment6
CPP = tests.cpp
OBJ = $(CPP:.cpp=.o)
GTEST_LIB = -lgtest -lgtest_main -pthread
STY = astyle -A1 -s4

$(A): $(OBJ)
	$(G) $(W) -o $(A) $(OBJ) $(GTEST_LIB)

%.o: %.cpp
	$(G) $(W) -c $< -o $@

clean:
	rm -f $(OBJ) $(A)

format:
	$(STY) $(CPP)

.PHONY: clean format
