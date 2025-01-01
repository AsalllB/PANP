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

void typing(std::string text, bool next_line = true, int speed = 50);

void enableAnsiSupport();