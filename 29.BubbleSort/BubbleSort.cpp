#include <iostream>

using namespace std;

int main()
{
    int num[5] = {0};
    cout << "Enter numbers to fill the array:-\n";
    for (int i = 0; i <= sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i << "element: ";
        cin >> num[i];
    }

    return 0;
}