G = g++
A = Assignment3
TSO = tests.o
AO = autobot.o
DO = decepticon.o
NO = neutral.o
TO = transformer.o
GO = guns.o

all: $(A)

$(A): $(TSO) $(AO) $(DO) $(NO) $(TO) $(GO)
	$(G) $(TSO) $(AO) $(DO) $(NO) $(TO) $(GO) -lgtest -lpthread -o $@
 
%.o: %.cpp
	$(G) -c $<
 
clean:
	rm *.o $(A)

cleanall:
	rm *.o *.cpp $(A)
