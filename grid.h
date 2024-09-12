#pragma once

class Grid { 
public:
    Grid();
    void initialize();
    int grid[20][10];
    void print();

private:
    int numRows;
    int numCols;
    int cellSize;

};