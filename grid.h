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
    std::vector<Color> getCellColors();
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;

};