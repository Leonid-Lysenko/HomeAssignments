G = g++
FLAGS = -g -Wall -Werror -Wpedantic 
A = Assignment4
O = tests.o autobot.o decepticon.o neutral.o transformer.o guns.o

.PHONY: all clean format

all: $(A)

$(A): $(O)
	$(G) $(FLAGS) -o $@ $^ -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(G) $(FLAGS) -c $< -o $@

clean:
	rm -f $(O) $(A)

format:
	astyle -A1 -s4 *.cpp *.hpp

