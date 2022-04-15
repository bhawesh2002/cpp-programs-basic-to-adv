/*Write a function that displays at the left side of the screen a solid square of dollar
signs ($) where the side length (s) is passed as a parameter by the user.*/

#include <iostream>

void pattern(int s);

using namespace std;

int main()
{
    int side_length;
    cout << "Enter the side length of the square: ";
    cin >> side_length;
    pattern(side_length);
    return 0;
}

void pattern(int s)
{
    for (int i = 1; i <= s; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << "$";
        }
        cout << endl;
    }
}