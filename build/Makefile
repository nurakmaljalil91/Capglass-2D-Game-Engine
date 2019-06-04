#CXX compiler specifies the compiler we're using
CXX = g++

#Determine the the c++ version compiler using
STD = -std=c++11

#TARGET specifies which file to compile as part of the project
TARGET = main

#DIR specifies which directory to compile
DIR = ../src/

#-------Here all the object dependecies-----------------
GAME = ../src/game.cpp
LOG = ../src/utils/Log.cpp


#-------------------------------------------------------

#INCLUDE_PATHS specifies the additional include paths we'll need
INCLUDE_PATHS = -I..\vendors\SFML-2.5.1\include #-I..\vendor\imgui -I..\vendor\imgui\imgui-sfml

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -L..\vendors\SFML-2.5.1\lib

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
# -Wl,-subsystem,windows gets rid of the console window
COMPILER_FLAGS = -w -Wl,-subsystem,windows

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lOpenGL32 -lsfml-graphics -lsfml-window -lsfml-system

#This is the target that compiles our executable
all : $(DIR)$(TARGET).cpp
	$(CXX) $(STD) $(DIR)$(TARGET).cpp $(GAME) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(LINKER_FLAGS) -o ../bin/$(TARGET)

