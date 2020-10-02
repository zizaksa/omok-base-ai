# Compiler and Compile options.
CC = g++
CXXFLAGS = -Wall -Wno-sign-compare -DLOCAL_TEST

CXXFLAGS += -O2
#CXXFLAGS += -g

# Macros specifying path for compile.
SRCS := $(wildcard src/*.cpp)
OBJS := $(SRCS:.cpp=.o)
INC = ./include/
LIB = ./lib/

# Pre-Processor.
CXXFLAGS += -I$(INC) -L$(LIB) -lpthread -fopenmp --std=c++11


TARGET = dist/run


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CXXFLAGS)



# Delete binary & object files
clean:
	$(RM) $(TARGET) $(OBJS)