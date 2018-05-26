bool CGame::checkUp(int cellNum) {
  int current = cellNum - 8;
  while (current >= 0 && gameState[current].GetColor() == -1 * color) {
    current -= 8;
  }
  if (current >= 0 && gameState[current].GetColor() == color && current != cellNum - 8) {
    directions[1] = true;
    return true;
  }
  return false;
}

bool CGame::checkUpRight(int cellNum) {
  int current = cellNum - 7;
  while (current >= 0 && current % 8 != 0 && gameState[current].GetColor() == -1 * color) {
    current -= 7;
  }
  if (current >= 0 && current % 8 != 0 && gameState[current].GetColor() == color && current != cellNum - 7) {
    directions[2] = true;
    return true;
  }
  return false;
}

bool CGame::checkRight(int cellNum) {
  int current = cellNum + 1;
  while (current % 8 != 0 && gameState[current].GetColor() == -1 * color) {
    current += 1;
  }
  if (current % 8 != 0 && gameState[current].GetColor() == color && current != cellNum + 1) {
    directions[3] = true;
    return true;
  }
  return false;
}




void CGame::InitGame() {
  offsets[1] = -8; //сдвиг по клеткам для шага вверх
  offsets[2] = -7; //вправо-вверх
  offsets[3] = 1;  //вправо
  offsets[4] = 9;  //вправо-вниз
  offsets[5] = 8;  //вниз
  offsets[6] = 7;  //влево-вниз
  offsets[7] = -1; //влево
  offsets[8] = -9; //влево-вверх
  for (int i = 0; i < 64; i++) {
    gameState[i] = CFigure(0, i);
    availablePositions[i] = CFigure(0, i);
  }

bool CGame::checkUp(int cellNum) {
  int current = cellNum - 8;
  while (current >= 0 && gameState[current].GetColor() == -1 * color) {
    current += offsets[1];
  }
  if (current >= 0 && gameState[current].GetColor() == color && current != cellNum + offsets[1]) {
    directions[1] = true;
    return true;
  }
  return false;
}
bool CGame::checkUpRight(int cellNum) {
  int current = cellNum - 7;
  while (current >= 0 && current % 8 != 0 && gameState[current].GetColor() == -1 * color) {
    current += offsets[2];
  }
  if (current >= 0 && current % 8 != 0 && gameState[current].GetColor() == color && current != cellNum + offsets[2]) {
    directions[2] = true;
    return true;
  }
  return false;
}
bool CGame::checkRight(int cellNum) {
  int current = cellNum + 1;
  while (current % 8 != 0 && gameState[current].GetColor() == -1 * color) {
    current += offsets[3];
  }
  if (current % 8 != 0 && gameState[current].GetColor() == color && current != cellNum + offsets[3]) {
    directions[3] = true;
    return true;
  }
  return false;
}