/*Write a program to find the sum of the series 1^3 + 3^3 + 5^3 + 7^3 + … n terms. Assume
that the value of n is given by the user during program execution?*/

#include <iostream> // for basic I/O(cin, cout)

using namespace std; // using namespace std;

int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    while (n * 2 >= i)
    {
        cout << i << "^3 + "; // print the series
        sum += i * i * i;     // calculate the sum(note there is only change in formula from previous code)
        i += 2;               // increment i by 2
    }
    cout << "\nSum = " << sum << endl; // print the sum
    return 0;
}