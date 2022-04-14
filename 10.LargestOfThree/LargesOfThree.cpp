/*Write a program to ask the user to input three numbers. The program should then print
the largest number on the screen*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;
    cout << "\nEnter the third number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "Largest number is " << a;
    }
    else if (b > a && b > c)
    {
        cout << "Largest number is " << b;
    }
    else
    {
        cout << "Largest number is " << c;
    }
    return 0;
}