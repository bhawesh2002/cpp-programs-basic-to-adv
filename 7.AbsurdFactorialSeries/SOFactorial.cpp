/*Write a program to find the sum of the following series:
1 + 1/(2)! + 1/(3)! + … n terms.
Assume that the value of n is given by the user?*/

#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, fact = 1;
    float sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    while (n * 2 >= i)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        cout << 1 << "/(" << i << ")!" << " + ";
        cout <<"\tfact="<< fact << " + ";
        sum += 1.0 / (fact);
        i += 2;
    }
    cout << "\nSum = " << sum << endl;
    return 0;
}

