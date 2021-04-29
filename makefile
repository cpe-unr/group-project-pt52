wav: main.o wavFile.o
	g++ -std=c++11 -o wav main.o wavFile.o

main.o: main.cpp wavFile.h 
	g++ -std=c++11 -c main.cpp

wavfile.o: wavFile.cpp wavFile.h wavHeader.h 
	g++ -std=c++11 -c wavFile.cpp

clean:
	rm *.o wav