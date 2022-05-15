#include <iostream>
#include <conio.h> //conio stands for console input/output

using namespace std;

int main()
{
    cout << "Code that conatins functions provided by conio library" << endl;
    cout << "1. getch()\n"
         << "Function that reads a character from the keyboard\n"
         << "This function is used to hold the output screen" << endl;
    cout << "Press any key to continue..." << endl;
    getch(); // waits for user to press a key
    return 0;
}