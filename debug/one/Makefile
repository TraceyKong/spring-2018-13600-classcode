main: main.o prog.o
	g++ -o main main.o prog.o

tests: tests.o prog.o
	g++ -o tests tests.o prog.o

tests.o: tests.cpp prog.h

main.o: main.cpp prog.h

prog.o: prog.cpp prog.h

clean:
	rm prog.o main.o
