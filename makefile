CC = g++
CFLAGS = -fprofile-arcs -ftest-coverage  
LNK = -lgtest -lgcov

all: DecisionTableTest BoundaryTest EquivalenceTest PathTest 
DecisionTableTest: DecisionTableTest.cpp date.o
	$(CC) -o DecisionTableTest $(CFLAGS) $(LNK) DecisionTableTest.cpp date.o
BoundaryTest: BoundaryTest.cpp date.o
	$(CC) -o BoundaryTest $(CFLAGS) $(LNK) BoundaryTest.cpp date.o
EquivalenceTest: EquivalenceTest.cpp date.o
	$(CC) -o EquivalenceTest $(CFLAGS) $(LNK) EquivalenceTest.cpp date.o
PathTest: PathTest.cpp date.o
	$(CC) -o PathTest $(CFLAGS) $(LNK) PathTest.cpp date.o
date.o: date.h date.cpp
	$(CC) -c -o date.o $(CFLAGS) date.cpp
clean:
	rm -f *.gcda
	rm -f *.gcov
	rm -f *.gcno
	rm -f *.o


