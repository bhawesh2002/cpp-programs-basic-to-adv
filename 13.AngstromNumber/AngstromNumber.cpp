/*Write a program to check whether a number entered by the user is an angstrom number or
not. The program should carry on executing as long as the user wants?*/

#include <iostream>

using namespace std;

int main()
{
    int num, entered_num, n = 0, temp, sum = 0; //`n` is the number of digits in the number, `temp` is used to store the individual digits of the number, `sum` is used to store the angstrom number
    cout << "enter a number: ";
    cin >> num;
    entered_num = num;
    while (num != 0)   //while loop to find the number of digits in the number
    {
        num = num / 10;  // to remove the last digit of the number
        n++;        
    }
    cout << n;
    return 0;
}