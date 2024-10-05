#include <iostream>
#include <raylib.h>
#include "grid.h"
#include "colors.h"
#include "blocks.cpp"

int main() {
    InitWindow(300, 600, "Tetris!");
    SetTargetFPS(60);

    Grid grid = Grid();

    TBlock block = TBlock();
    block.Move(4, 3);
   

    // Game Loop:
    while (WindowShouldClose() == false) {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.draw();
        block.Draw();

        EndDrawing();
    }

    CloseWindow();
    
}