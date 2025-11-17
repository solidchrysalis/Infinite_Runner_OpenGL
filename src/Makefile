# Makefile for building and cleaning the hello program

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g
LDFLAGS = -L/usr/local/lib
LIBS = -ldl -lglfw

# Target executable
TARGET = game
SRC = hello_triangle.cpp
OBJ = hello_triangle.o

# Default target to build the program
all: $(TARGET)

# Link the object file to create the final executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) $(LDFLAGS) $(LIBS) glad.c -o $(TARGET)

# Compile the source file into an object file
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# Clean the build by removing the object file and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets to avoid conflict with files named 'all' or 'clean'
.PHONY: all clean
