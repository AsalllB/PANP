#include <iostream>

enum Position
{
  DOWN,
  UP,
  NO_CHANGE
};

void update_console(int, Position, std::string);

void sleep(int milliseconds);

void ResetColor();

int random_number();