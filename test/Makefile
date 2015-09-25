CXX = g++
CXXFLAGS = -O3 --std=c++11 -Wall -Wextra -Weffc++
OBJS = BaseStats.o Pokemon.o PokeData.o test.o
TARGET = test.ext
INCLUDE = -I ../
VPATH = ../

all: $(TARGET)

$(TARGET):$(OBJS)
		$(CXX) $(OBJS) $(CXXFLAGS) $(INCLUDE) -o $(TARGET)

clean:
	-rm -f $(TARGET) $(OBJS)

.cpp.o:
		$(CXX) -c $< $(CXXFLAGS) $(INCLUDE)


