W = -g -Wall -Werror -Wpedantic
G = g++ 
A = Assignment5
CPP = autobot.cpp decepticon.cpp guns.cpp transformer.cpp main.cpp
OBJ = $(CPP:.cpp=.o)
STY = astyle -A1 -s4 *.cpp *.hpp

$(A): $(OBJ)
	$(G) $(W) -o $(A) $(OBJ)
%.o: %.cpp
	$(G) $(W) -c $< -o $@

clean:
	rm -f $(OBJ) $(A)

format:
	$(STY)
