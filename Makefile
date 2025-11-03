


CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude -std=c++23 -O0
LDFLAGS = -lglfw -lGL -lpthread -lXrandr -lXi -ldl


SRC := $(shell find src -name '*.cpp')
OBJ := $(patsubst src/%.cpp,build/%.o,$(SRC))


TARGET = libnuck.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $@ $^

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

test: $(TARGET)
	$(CXX) $(CXXFLAGS) examples/main.cpp -L. -lnuck $(LDFLAGS) -o build/test
	build/test