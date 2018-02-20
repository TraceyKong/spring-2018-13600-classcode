main: main.o fact.o
	g++ -o main main.o fact.o

tests: tests.o fact.o tests_fact.o
	g++ -o tests tests.o fact.o tests_fact.o


tests_fact.o: tests_fact.cpp

tests.o: tests.cpp fact.h

main.o: main.cpp fact.h

fact.o: fact.cpp fact.h

clean:
	rm fact.o main.o
