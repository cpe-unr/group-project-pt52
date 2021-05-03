wav: main.o wavFile.o CSVWriter.o directory.o metadata.o echo.o noiseGate.o normalization.o
	g++ -std=c++11 -o wav main.o wavFile.o directory.o metadata.o

main.o: main.cpp wavFile.h directory.h 
	g++ -std=c++11 -c main.cpp

wavfile.o: wavFile.cpp wavFile.h wavHeader.h 
	g++ -std=c++11 -c wavFile.cpp

CSVWriter.o: CSVWriter.cpp CSVWriter.h 
	g++ -std=c++11 -c CSVWriter.cpp

directory.o: directory.cpp directory.h
	g++ -std=c++11 -c directory.cpp

metadata.o: metadata.cpp metadata.h wavHeader.h
	g++ -std=c++11 -c metadata.cpp

echo.o: echo.cpp echo.h iProcessable.h 
	g++ -std=c++11 -c echo.cpp

noiseGate.o: noiseGate.cpp noiseGate.h iProcessable.h 
	g++ -std=c++11 -c noiseGate.cpp

normalization.o: normalization.cpp normalization.h iProcessable.h 
	g++ -std=c++11 -c normalization.cpp

clean:
	rm *.o wav