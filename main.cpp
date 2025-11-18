#include<iostream>
#include"include/raylib.h"
int main(){
    InitWindow(1366,786,"Hello World");
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(LIGHTGRAY);
        DrawCircle(500,500,100,RED);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}