#pragma once
#include <raylib.h>
#include <vector>

class Grid { 
public:
    Grid();
    void initialize();
    int grid[20][10];
    void draw();
    void print();

private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;

};