// Asal.B :>
// Mr.MKZ
#include <bits/stdc++.h>
#include <stdlib.h>

#include "src/functions.h"
#include "src/slot_machine.h"

using namespace std;

int main()
{
  // Seed random number generator with current time to generate real random numbers.
  srand(static_cast<unsigned int>(time(0)));
  enableAnsiSupport();

  int n;
  double sum = 0;
  int a[1000];

  typing("Enter number of entries: ", false);
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    typing("Entry number " + to_string(i + 1) + ": ", false);
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }

  cout << endl;

  typing("Preparing to start progress...");

  sleep(1000);

  system("cls");

  // replace this random_number function with your calculated number because this variable is used to select final number in slot machine.
  int subject_number = ceil(sum / n);

  slot_machine(subject_number);

  update_console(4, DOWN, "");

  sleep(500);

  typing("Subject number " + to_string(subject_number) + " selected!");

  return 0;
}