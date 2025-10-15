CXX = g++

COMPILER_OPTIONS = -O2

LINKER_OPTIONS = -O2

TARGET = program

SOURCES = main.cpp sourceCodeFuture.cpp sourceCodeMaster.cpp

OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

%.o : %.cpp
	@echo "compiling $^ ..."
	@$(CXX) $(COMPILER_OPTIONS) -c $^ -o $@

all : $(OBJECTS)
	@echo "building $(TARGET) ..."
	@$(CXX) $(LINKER_OPTIONS) $(OBJECTS) -o $(TARGET).exe

clean :
	@rm -f $(TARGET).exe $(OBJECTS)
