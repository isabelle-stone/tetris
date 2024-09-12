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
    grid.print();

    // Game Loop:
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(darkBlue);

        EndDrawing();
    }

    CloseWindow();
    
}