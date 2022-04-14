/*Write a program to ask the user to input a number and find out whether it is a palindrome
or not?*/

#include <iostream>

using namespace std;

int main()
{
    int num, num_entered = 0, temp, reverse = 0;
    cout << "Enter the number: ";
    cin >> num;
    num_entered = num;
    while (num != 0)
    {
        temp = num % 10;
        num = num / 10;
        reverse = reverse * 10 + temp;
    }
    cout << "Reverse of the number is " << reverse;
    if (reverse == num_entered)
    {
        cout << "\nThe number is a palindrome";
    }
    else
    {
        cout << "\nThe number is not a palindrome";
    }

    return 0;
}