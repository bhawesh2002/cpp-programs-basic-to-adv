/*Write a program to find the sum of the series 13 + 33 + 53 + 73 + … n terms. Assume
that the value of n is given by the user during program execution?*/
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0; // declare variables n and sum; initialize sum to 0(only sum is initialised to 0 not n)
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (n * 2 >= i)  // while loop to iterate through the series
    {
        cout << i << " + "; // prints the value of i
        sum = sum + i; // adds the value of i to sum
        i = i + 2;     // increments i by 2
    }
    cout << "\nThe sum of the series is: " << sum << endl;
    return 0;
}