/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 5;
    int winningDigits[SIZE];
    int player[SIZE];
    int matches = 0;

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % 10;
    }

    cout << "Enter 5 digits (0-9) separated by spaces: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> player[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matches++;
        }
    }

    cout << "Winning digits: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }
    cout << endl;

    cout << "Player digits: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }
    cout << endl;

    cout << "Number of matches: " << matches << endl;

    return 0;
}