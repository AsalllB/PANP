#include <iostream>
#include <thread>
#include <chrono>

#include "src/functions.h"
#include "src/slot_machine.h"

using namespace std;

int main()
{
  // Seed random number generator with current time to generate real random numbers.
  srand(static_cast<unsigned int>(time(0)));

  // replace this random_number function with your calculated number because this variable is used to select final number in slot machine.
  int subject_number = random_number();

  slot_machine(subject_number);

  update_console(4, DOWN, "");

  sleep(500);

  cout << "Subject number " + to_string(subject_number) + " selected!";

  cout << "\n\nPress enter to exit program...";

  cin.get();

  return 0;
}