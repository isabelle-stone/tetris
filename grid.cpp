#include "grid.h"
#include <iostream>

Grid::Grid() {
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    initialize();
}

void Grid::initialize() {
    for (int r = 0; r < numRows; r++) {
        for (int c = 0; c < numCols; c++) {
            grid[r][c] = 0;
        }
    }
}

void Grid::print() {
    for (int r = 0; r < numRows; r++) {
        for (int c = 0; c < numCols; c++) {
            std::cout << grid[r][c] << " ";
        }
        std::cout << std::endl;
    }

}