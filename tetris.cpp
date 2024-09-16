#include <iostream>
#include <raylib.h>
#include <deque>
#include <raymath.h>
#include "grid.h"

Color darkBlue = {44, 44, 127, 255};

int main() {
    InitWindow(300, 600, "Tetris!");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.print();

    // Game Loop:
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.draw();

        EndDrawing();
    }

    CloseWindow();
    
}