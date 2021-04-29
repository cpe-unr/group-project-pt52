wav: main.o wavFile.o CSVWriter.o
	g++ -std=c++11 -o wav main.o wavFile.o

main.o: main.cpp wavFile.h 
	g++ -std=c++11 -c main.cpp

wavfile.o: wavFile.cpp wavFile.h wavHeader.h 
	g++ -std=c++11 -c wavFile.cpp

CSVWriter.o: CSVWriter.cpp CSVWriter.h 
	g++ -std=c++11 -c CSVWriter.cpp

clean:
	rm *.o wav