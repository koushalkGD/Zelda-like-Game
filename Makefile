.RECIPEPREFIX := >

CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
LIBS := -lsfml-graphics -lsfml-window -lsfml-system
SRC := src/main.cpp src/Game.cpp
OUT := bin/game

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
> @mkdir -p $(dir $(OUT))
> $(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LIBS)

run: all
> xvfb-run -s "-screen 0 800x600x24" ./$(OUT)

clean:
> rm -rf bin