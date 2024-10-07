G = g++
A = Assignment2a
MO = main1.o

all: $(A)

$(A): $(MO)
	$(G) $(MO) -o $@
 
%.o: %.cpp
	$(G) -c $<
 
clean:
	rm *.o output $(A)

cleanall:
	rm *.o *.cpp $(A)
	rm *.o *.cpp $(RUN)
