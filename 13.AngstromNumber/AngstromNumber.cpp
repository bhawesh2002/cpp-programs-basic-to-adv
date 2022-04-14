/*Write a program to check whether a number entered by the user is an angstrom number or
not. The program should carry on executing as long as the user wants?*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, entered_num, entered_num2, n = 0, temp, sum = 0; //`n` is the number of digits in the number, `temp` is used to store the individual digits of the number, `sum` is used to store the angstrom number
    cout << "enter a number: ";
    cin >> num;
    entered_num = num;       //`entered_num` is used to store the number entered by the user
    entered_num2 = num;      //`entered_num2` is used to store the number entered by the user
    while (entered_num != 0) // while loop to find the number of digits in the number
    {
        entered_num = entered_num / 10; // to remove the last digit of the number
        n++;                            // increment the number of digits
    }
    for (int i = 1; i <= n; i++)
    {
        temp = entered_num2 % 10;         // to store the last digit of the number
        entered_num2 = entered_num2 / 10; // to remove the last digit of the number
        sum = sum + pow(temp, n);         // to calculate the sum of the cube of the digits
    }
    if (sum == num)
        cout << "The number is an angstrom number";
    else
        cout << "The number is not an angstrom number";
    return 0;
}