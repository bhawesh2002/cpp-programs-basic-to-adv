#include <iostream> // for basic I/O

using namespace std; /// no need to use std::

int main()
{                               // main function
    int num[5];                 // declaring array(data_type name[size])
    for (int i = 0; i < 5; i++) // for loop to fill values into array
    {
        cout << "Enter number: ";
        cin >> num[i]; // inputting values into array
    }
    return 0;
}