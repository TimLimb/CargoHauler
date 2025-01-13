Transporter: main.o Cargo.o Person.o
	g++ -o Transporter main.o Cargo.o Person.o

main.o: main.cpp Train.h bus.h Cargo.h Person.h Transporter.h
	g++ -c main.cpp

Cargo.o: Cargo.h Cargo.cpp
	g++ -c Cargo.cpp

Person.o: Person.h Person.cpp
	g++ -c Person.cpp

clean:
	rm *.o Transporter