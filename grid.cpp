#include "grid.h"
#include <iostream>
#include "colors.h"

Grid::Grid() {
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    initialize();
    colors = getCellColors();
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

void Grid::draw() {
    for (int r = 0; r < numRows; r++) {
        for (int c = 0; c < numCols; c++) {
            int cellValue = grid[r][c];
            DrawRectangle(c * cellSize + 1, r * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}