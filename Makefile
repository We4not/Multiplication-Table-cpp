CC = g++
FLAGS = -c
FOLDERBIN = bin
FOLDEROBJ = obj
SOURCECODE = src/main.cpp
OBJECTS = $(FOLDEROBJ)/main.o
EXECUTABLEFILE = Program

all: Program

Program: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(FOLDERBIN)/$(EXECUTABLEFILE)

$(OBJECTS): $(SOURCECODE)
	$(CC) $(SOURCECODE) $(FLAGS) -o $(OBJECTS)

