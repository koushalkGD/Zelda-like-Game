.RECIPEPREFIX = >

CXX=g++
CXXFLAGS=-std=c++11 -Wall -Wextra
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
SRC=src/main.cpp
OUT=bin/game

all:
>mkdir -p bin
>$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LIBS)

run: all
>./$(OUT)
clean:
>rm -rf bin