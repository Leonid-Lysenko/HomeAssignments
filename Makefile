problem-1: main.o hello.o
	g++ main.o hello.o -o problem-1

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp hello.hpp
	g++ -c hello.cpp

clean:
	rm *.o problem-1
