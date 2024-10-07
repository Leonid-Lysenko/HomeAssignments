G = g++
A = Assignment2b
MO = main2.o

all: $(A)

$(A): $(MO)
	$(G) $(MO) -o $@
 
%.o: %.cpp
	$(G) -c $<
 
clean:
	rm *.o $(A)

cleanall:
	rm *.o *.cpp $(A)
