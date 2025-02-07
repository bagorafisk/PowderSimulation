#include <raylib.h>
#include <raymath.h>

int main() {
    InitWindow(800, 600, "raylib example");
    SetTargetFPS(165);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }
}