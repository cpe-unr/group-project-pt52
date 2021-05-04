wav: main.o wavFile.o CSVWriter.o directory.o userInter.o metadata.o fpLib.a
	g++ -std=c++11 -o wav main.o wavFile.o directory.o metadata.o userInter.o CSVWriter.o fpLib.a

main.o: main.cpp wavFile.h directory.h 
	g++ -std=c++11 -c main.cpp

wavfile.o: wavFile.cpp wavFile.h wavHeader.h 
	g++ -std=c++11 -c wavFile.cpp

CSVWriter.o: CSVWriter.cpp CSVWriter.h 
	g++ -std=c++11 -c CSVWriter.cpp

userInter.o: userInter.cpp userInter.h wavHeader.h
	g++ -std=c++11 -c userInter.cpp

directory.o: directory.cpp directory.h
	g++ -std=c++11 -c directory.cpp

metadata.o: metadata.cpp metadata.h wavHeader.h
	g++ -std=c++11 -c metadata.cpp

eightBitEcho.o: eightBitEcho.h iProcessable.h 
	g++ -std=c++11 -c eightBitEcho.h

eightBitNoiseGate.o: eightBitNoiseGate.h iProcessable.h 
	g++ -std=c++11 -c eightBitNoiseGate.h

eightBitNormalization.o: eightBitNormalization.h iProcessable.h 
	g++ -std=c++11 -c eightBitNormalization.h

sixteenBitEcho.o: sixteenBitEcho.h iProcessable.h 
	g++ -std=c++11 -c sixteenBitEcho.h

sixteenBitNoiseGate.o: sixteenBitNoiseGate.h iProcessable.h 
	g++ -std=c++11 -c BitNoiseGate.h

sixteenBitNormalization.o: sixteenBitNormalization.h iProcessable.h 
	g++ -std=c++11 -c sixteenBitNormalization.h

fpLib.a: eightBitEcho.o eightBitNoiseGate.o eightBitNormalization.o sixteenBitEcho.o sixteenBitNoiseGate.o sixteenBitNormalization.o
	ar suvr fpLib.a eightBitEcho.o eightBitNoiseGate.o eightBitNormalization.o sixteenBitEcho.o sixteenBitNoiseGate.o sixteenBitNormalization.o

clean:
	rm *.o *.a wav