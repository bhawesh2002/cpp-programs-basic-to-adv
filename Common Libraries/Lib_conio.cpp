#include <iostream>
#include <conio.h> //conio stands for console input/output

using namespace std;

int main()
{
    cout << "Code that conatins functions provided by conio library" << endl;
    cout << "\n===============================" << endl;
    cout << "1. getch()\n"
         << "Function that reads a character from the keyboard\n"
         << "This function is used to hold the output screen" << endl;
    cout << "Press any key to continue..." << endl;
    getch(); // waits for user to press a key
    cout << "\n===============================" << endl;
    cout << "getche()\n"
         << "Function that reads a character from the keyboard and also pprints the character entered\n"
         << "This function is used to hold the output screen" << endl;
    cout << "Press any key to continue..." << endl;
    getche(); // waits for user to press a key
    cout << "\n===============================" << endl;
    cout << "putch()\n"
         << "Function that prints a character to the output screen screen\n"
         << endl;
    putch('A'); // prints the character 'A' to the output screen
    return 0;
}