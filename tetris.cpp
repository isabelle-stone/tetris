#include <iostream>
#include <raylib.h>
#include <deque>
#include <raymath.h>

using namespace std;

int main() {
    InitWindow(300, 600, "Tetris!");
    SetTargetFPS(60);

    // Game Loop:
    while (WindowShouldClose() == false) {
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();
    
}