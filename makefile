TestMap: TestMap.o
	g++ -g -Wall -pedantic $^ -o $@

TestMap.o: TestMap.cpp Map.h Library.h Employee.h Tests.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm TestMap.o Map
