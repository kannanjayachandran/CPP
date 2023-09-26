# Compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Source files
SOURCES = main.cpp 

# Executable name
TARGET = MyNeuralNetwork

# Object files directory
OBJDIR = obj

# Create a list of object files based on source files
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

# Default target: build the executable
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile source files into object files
$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Create the object files directory
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Clean up
clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean
