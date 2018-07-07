LD_FLAGS := -pthread
CC_FLAGS := -std=c++0x -Wall -pthread

Triton:

	g++ $(LD_FLAGS) $(CC_FLAGS) -o Triton src/dom/Node.cpp src/dom/Node.h src/html/Parser.cpp src/html/Parser.h src/main.cpp -ldl 

clean:
	rm -rf Triton
