CC=gcc
TARGET=./bin/QuickSort
FILES=./src/core/main.c ./src/core/App.c ./src/core/Renderer.c
FLAGS=-Wall -std=c99 -Wno-missing-braces -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm

all:
	$(CC) $(FILES) -o $(TARGET) $(FLAGS)