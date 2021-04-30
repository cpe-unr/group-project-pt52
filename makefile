wav: main.o wavFile.o CSVWriter.o directory.o
	g++ -std=c++11 -o wav main.o wavFile.o directory.o

main.o: main.cpp wavFile.h directory.h
	g++ -std=c++11 -c main.cpp

wavfile.o: wavFile.cpp wavFile.h wavHeader.h 
	g++ -std=c++11 -c wavFile.cpp

CSVWriter.o: CSVWriter.cpp CSVWriter.h 
	g++ -std=c++11 -c CSVWriter.cpp

directory.o: directory.cpp directory.h
	g++ -std=c++11 -c directory.cpp

clean:
	rm *.o wav