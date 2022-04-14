/*Write a program to ask the user to input a number and print its table up to the 10th
multiple.*/

#include <iostream> //include iostream library

using namespace std; // using namespace std

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = 1; i <= 10; i++) // i = 1 because we want to start from 1
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }
    return 0;
}