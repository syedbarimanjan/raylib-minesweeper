#include <raylib.h>

int main() {
  InitWindow(800, 450, "basic window");

  while(!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      DrawRectangle(100,100,100,100,BLUE);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}