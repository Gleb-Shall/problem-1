all: total

total: main.o sayhello.o
	g++ -Wall  main.o sayhello.o -o total

main.o: main.cpp
	g++ -c main.cpp

sayhello.o: sayhello.cpp
	g++ -c sayhello.cpp

clean:
	rm -rf *.o total
