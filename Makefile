main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.h funcs.cpp
	g++ -c funcs.cpp

clean:
	rm -f main.o funcs.o
