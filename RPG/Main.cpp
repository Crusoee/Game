#include <stdio.h>
#include <raylib.h>
#include <iostream>
#include "player.h"
#include "Vec2.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    Vec2 v1 = { 2,2 };
    Vec2 v2 = { 1,1 };
    Vec2 v3 = v1 + v2;
    std::cout << v3.x << " " << v3.y << std::endl;

    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    Player player = Player();

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        player.getInput();
        player.move();

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();



        ClearBackground(RAYWHITE);

        DrawRectangle(player.pos.x, player.pos.y, player.sizeX, player.sizeY, { 0,255,0,255 });

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}