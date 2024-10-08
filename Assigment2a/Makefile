all: total

total: main.o WorkWithFile.o
	g++ main.o WorkWithFile.o -o total

main.o: main.cpp
	g++ -c main.cpp

sayhello.o: WorkWithFile.cpp
	g++ -c WorkWithFile.cpp

clean:
	rm -rf *.o total
