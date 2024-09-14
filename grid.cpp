#include "grid.h"
#include <iostream>

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

std::vector<Color> Grid::getCellColors() {
    const Color darkGrey = {26, 31, 40, 255};
    const Color green = {47, 230, 23, 255};
    const Color red = {232, 18, 18, 255};
    const Color orange = {226, 116, 17, 255};
    const Color yellow = {237, 234, 4, 255};
    const Color purple = {166, 0, 247, 255};
    const Color cyan = {21, 204, 209, 255};
    const Color blue = {13, 64, 216, 255};
    const Color lightBlue = {59, 85, 162, 255};
    const Color darkBlue = {44, 44, 127, 255}; 

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::draw() {
    for (int r = 0; r < numCols; r++) {
        for (int c = 0; c < numRows; r++) {
            int cellValue = grid[r][c];
        }
    }
}