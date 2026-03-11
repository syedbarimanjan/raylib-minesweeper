#include <stdlib.h>
#include <time.h>

#include <raylib.h>
#include <raymath.h>

#define COLS 10
#define ROWS 10

const int screenWidth = 600;
const int screenHeight = 600;

const int cellWidth = screenWidth / COLS;
const int cellHeight = screenHeight / ROWS;

typedef struct Cell {
  int i;
  int j;
  bool containsMine;
  bool revealed;
} Cell;

Cell grid[COLS][ROWS];

void CellDraw(Cell);
bool IndexIsValid(int, int);
void CellReveal(int, int);

int main() {
  srand(time(0));
  InitWindow(screenWidth, screenHeight, "basic window");
  
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      grid[i][j] = (Cell) {.i = i, .j = j};
    }
  }

  while(!WindowShouldClose()) {

    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
      Vector2 mPos = GetMousePosition();
      int indexI = mPos.x / cellWidth;
      int indexJ = mPos.y / cellHeight;

      if (IndexIsValid(indexI, indexJ)){
        CellReveal(indexI,indexJ);
      }
    }

    BeginDrawing();
      ClearBackground(RAYWHITE);
      for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
          CellDraw(grid[i][j]);
        }
      }
    EndDrawing();
  } 
    
  CloseWindow();
    
  return 0;
}

void CellDraw(Cell cell) {
  if(cell.revealed){
    if(cell.containsMine){
      DrawRectangleLines( cell.i * cellWidth, cell.j *cellHeight, cellWidth, cellHeight, RED);
    } 
    else{
      DrawRectangleLines( cell.i * cellWidth, cell.j *cellHeight, cellWidth, cellHeight, RED);
    }
  }
  DrawRectangleLines( cell.i * cellWidth, cell.j *cellHeight, cellWidth, cellHeight, BLACK);
}

bool IndexIsValid(int i, int j) {
  return i >= 0 && i < COLS && j >= 0 && j < ROWS;
}

void CellReveal(int i, int j) {
  grid[i][j].revealed = true;

  if(grid[i][j].containsMine){
    //lose
  } 
  else {
    //play sound
  }
}