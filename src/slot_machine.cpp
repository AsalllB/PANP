#include <iostream>

#include "src/functions.h"

using namespace std;

std::string slot_row(int num1, int num2, int num3)
{
    return "| " + to_string(num1) + " | " + to_string(num2) + " | " + to_string(num3) + " |";
}

void slot_machine(int finalNumber)
{
    int rounds = 100;
    int maxRounds = rounds;

    cout << "|-----------|\n";
    cout << "|   |   |   |\n";
    cout << "| 0 | 0 | 0 |\n";
    cout << "|   |   |   |\n";
    cout << "|-----------|";

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    while (rounds > 0)
    {
        num1 = random_number();
        num2 = random_number();
        num3 = random_number();

        if (rounds == maxRounds)
        {
            update_console(2, UP, slot_row(1, 1, 1));
        }
        else
        {
            update_console(0, NO_CHANGE, slot_row(num1, num2, num3));
        }

        rounds >= 6 ? sleep((1000 / rounds) * 5) : sleep(1000 / rounds);

        rounds--;
    }

    update_console(0, NO_CHANGE, slot_row(finalNumber, num2, num3));
    sleep(1000);
    update_console(0, NO_CHANGE, slot_row(finalNumber, finalNumber, num3));
    sleep(1000);
    update_console(0, NO_CHANGE, "\033[92m" + slot_row(finalNumber, finalNumber, finalNumber));

    ResetColor();

    return;
}