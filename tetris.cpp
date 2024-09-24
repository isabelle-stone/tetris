#include <iostream>
#include <raylib.h>
#include "grid.h"
#include "colors.h"


int main() {
    InitWindow(300, 600, "Tetris!");
    SetTargetFPS(60);

    Grid grid = Grid();
    // checking box functions
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.grid[0][1] = 6;
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