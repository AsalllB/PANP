#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

enum Position
{
  DOWN,
  UP,
  NO_CHANGE
};

/*
 * @brief  This function is used to simulate the movement of a robot in a 2D
 *
 * @param line_number Number of lines to change position of cursor.
 * @param position Position of cursor, DOWN or UP.
 * @param update_msg A new message which you want to replace with old message.
 */
void update_console(int line_number, Position position, string update_msg)
{
  if (position == 2)
  {
    // string ansi = "\033[";

    cout << "\r" + update_msg;
    return;
  }

  string pos = "A";

  if (!position)
  {
    pos = "B";
  }

  string ansi = "\033[" + to_string(line_number) + pos;

  cout << ansi << "\r" + update_msg;
}

void sleep(int milliseconds)
{
  std::this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

void ResetColor() { cout << "\033[0m"; }

int random_number()
{
  return (rand() % 5) + 1;
}

void typing(string text, bool next_line)
{
  string printed_text;

  for (char c : text)
  {
    printed_text += c;
    cout << printed_text << "\r";
    sleep(50);
  }

  if (next_line)
  {
    cout << endl;
  }
  else
  {
    cout << "\x1b[" + to_string(printed_text.length()) + "C";
  }
}